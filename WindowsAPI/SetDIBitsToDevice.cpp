#include <Windows.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"
#include "javahelper.h"

JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_SetDIBitsToDevice(JNIEnv* environment, jclass win32, jobject hdc, jint xDest, jint yDest, jlong w, jlong h, jint xSrc, jint ySrc, jint StartScan, jint cLines, jintArray lpvBits, jobject lpbmi, jint ColorUse) {
	long long contextAddress = NULL;
	if(hdc && getNativeMemoryAddress(environment, contextAddress, hdc)) return 0;
	HDC context = reinterpret_cast<HDC>(contextAddress);
	int* pixels = NULL;
	jint* elements = NULL;

	if(lpvBits) {
		int length = environment->GetArrayLength(lpvBits);
		elements = environment->GetIntArrayElements(lpvBits, NULL);
		pixels = new int[length];

		for(int i = 0; i < length; i++) {
			pixels[i] = elements[i];
		}
	}

	BITMAPINFO info = {0};
	if(lpbmi && getNativeBITMAPINFO(environment, info, lpbmi)) return 0;
	info.bmiHeader.biSize = sizeof(info.bmiHeader);
	jint result = SetDIBitsToDevice(context, xDest, yDest, w, h, xSrc, ySrc, StartScan, cLines, pixels, &info, ColorUse);
	
	if(lpvBits) {
		environment->ReleaseIntArrayElements(lpvBits, elements, NULL);
		delete[] pixels;
	}

	return result;
}
