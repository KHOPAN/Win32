#include <string>
#include <Windows.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"
#include "javahelper.h"

JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_DrawText(JNIEnv* environment, jclass win32, jobject hdc, jstring lpchText, jint cchText, jobject lprc, jint format) {
	long long contextAddress = NULL;
	if(hdc && getNativeMemoryAddress(environment, contextAddress, hdc)) return CLR_INVALID;
	HDC context = reinterpret_cast<HDC>(contextAddress);
	const char* text = NULL;

	if(lpchText) {
		text = environment->GetStringUTFChars(lpchText, NULL);
	}

	RECT rect = {0};
	if(lprc && getNativeRECT(environment, rect, lprc)) return CLR_INVALID;
	jint result = DrawTextA(context, text, cchText, &rect, format);

	if(lpchText) {
		environment->ReleaseStringUTFChars(lpchText, text);
	}

	return result;
}
