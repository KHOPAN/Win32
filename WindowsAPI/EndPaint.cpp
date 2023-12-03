#include <Windows.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"
#include "javahelper.h"

JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_EndPaint(JNIEnv* environment, jclass win32, jobject hWnd, jobject lpPaint) {
	long long address = NULL;
	if(hWnd && getNativeMemoryAddress(environment, address, hWnd)) return 0;
	PAINTSTRUCT paintStruct;
	if(lpPaint && getNativePAINTSTRUCT(environment, paintStruct, lpPaint)) return 0;
	return EndPaint(reinterpret_cast<HWND>(address), &paintStruct);
}
