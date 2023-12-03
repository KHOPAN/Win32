#include <Windows.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"
#include "javahelper.h"

JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_InvalidateRect(JNIEnv* environment, jclass win32, jobject hWnd, jobject lpRect, jboolean bErase) {
	long long windowAddress = NULL;
	if(hWnd && getNativeMemoryAddress(environment, windowAddress, hWnd)) return 0;
	HWND window = reinterpret_cast<HWND>(windowAddress);

	if(!lpRect) {
		return InvalidateRect(window, NULL, bErase);
	}

	RECT rect;
	if(getNativeRECT(environment, rect, lpRect)) return 0;
	return InvalidateRect(window, &rect, bErase);
}
