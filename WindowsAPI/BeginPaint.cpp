#include <Windows.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"
#include "javahelper.h"

JNIEXPORT jobject JNICALL Java_com_khopan_win32_Win32_BeginPaint(JNIEnv* environment, jclass win32, jobject hWnd, jobject lpPaint) {
	long long windowAddress = NULL;
	if(getNativeMemoryAddress(environment, windowAddress, hWnd)) return NULL;
	HWND window = reinterpret_cast<HWND>(windowAddress);
	PAINTSTRUCT paintStruct = {0};
	if(getNativePAINTSTRUCT(environment, paintStruct, lpPaint)) return NULL;
	HDC context = BeginPaint(window, &paintStruct);
	jobject result = NULL;
	if(getJavaMemoryAddress(environment, result, reinterpret_cast<long long>(context), "com/khopan/win32/struct/memory/HDC")) return NULL;
	if(getJavaPAINTSTRUCT(environment, lpPaint, paintStruct)) return NULL;
	return result;
}
