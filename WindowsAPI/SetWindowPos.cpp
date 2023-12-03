#include <Windows.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"
#include "javahelper.h"

JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_SetWindowPos(JNIEnv* environment, jclass win32, jobject hWnd, jobject hWndInsertAfter, jint X, jint Y, jint cx, jint cy, jint uFlags) {
	long long hWndAddress = NULL;
	if(hWnd && getNativeMemoryAddress(environment, hWndAddress, hWnd)) return 0;
	HWND window = reinterpret_cast<HWND>(hWndAddress);
	long long hWndInsertAfterAddress = NULL;
	if(hWndInsertAfter && getNativeMemoryAddress(environment, hWndInsertAfterAddress, hWndInsertAfter)) return 0;
	HWND windowInsertAfter = reinterpret_cast<HWND>(hWndInsertAfterAddress);
	return SetWindowPos(window, windowInsertAfter, X, Y, cx, cy, uFlags);
}
