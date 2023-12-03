#include <Windows.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"
#include "javahelper.h"

JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_DestroyWindow(JNIEnv* environment, jclass win32, jobject hWnd) {
	long long address = NULL;
	if(hWnd && getNativeMemoryAddress(environment, address, hWnd)) return NULL;
	return DestroyWindow(reinterpret_cast<HWND>(address));
}
