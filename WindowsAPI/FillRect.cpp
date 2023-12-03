#include <Windows.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"
#include "javahelper.h"

JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_FillRect(JNIEnv* environment, jclass win32, jobject hDC, jobject lprc, jobject hbr) {
	long long contextAddress = NULL;
	if(getNativeMemoryAddress(environment, contextAddress, hDC)) return 0;
	HDC context = reinterpret_cast<HDC>(contextAddress);
	RECT rect;
	if(getNativeRECT(environment, rect, lprc)) return 0;
	long long brushAddress = NULL;
	if(getNativeMemoryAddress(environment, brushAddress, hbr)) return 0;
	HBRUSH brush = reinterpret_cast<HBRUSH>(brushAddress);
	return FillRect(context, &rect, brush);
}
