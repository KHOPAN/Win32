#include <Windows.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"
#include "javahelper.h"

JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_ShowWindow(JNIEnv* environment, jclass win32, jobject hWnd, jint nCmdShow) {
	long long windowAddress = NULL;
	if(hWnd && getNativeMemoryAddress(environment, windowAddress, hWnd)) return 0;
	HWND window = reinterpret_cast<HWND>(windowAddress);
	return ShowWindow(window, nCmdShow);
}
