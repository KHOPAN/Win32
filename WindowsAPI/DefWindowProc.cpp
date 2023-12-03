#include <Windows.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"
#include "javahelper.h"
#include <CommCtrl.h>

JNIEXPORT jlong JNICALL Java_com_khopan_win32_Win32_DefWindowProc(JNIEnv* environment, jclass win32, jobject hWnd, jint Msg, jlong wParam, jlong lParam) {
	long long address = NULL;
	if(hWnd && getNativeMemoryAddress(environment, address, hWnd)) return NULL;
	return DefWindowProcA(reinterpret_cast<HWND>(address), static_cast<UINT>(Msg), static_cast<WPARAM>(wParam), static_cast<LPARAM>(lParam));
}
