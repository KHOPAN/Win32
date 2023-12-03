#include <Windows.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"
#include "javahelper.h"

JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_GetClientRect(JNIEnv* environment, jclass win32, jobject hWnd, jobject lpRect) {
	if(!lpRect) return NULL;
	long long address = NULL;
	if(hWnd && getNativeMemoryAddress(environment, address, hWnd)) return NULL;
	HWND window = reinterpret_cast<HWND>(address);
	RECT rect = {0};
	jint result = GetClientRect(window, &rect);
	if(getJavaRECT(environment, lpRect, rect)) return NULL;
	return result;
}
