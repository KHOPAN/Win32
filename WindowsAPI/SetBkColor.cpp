#include <Windows.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"
#include "javahelper.h"

JNIEXPORT jlong JNICALL Java_com_khopan_win32_Win32_SetBkColor(JNIEnv* environment, jclass win32, jobject hdc, jlong color) {
	long long address = NULL;
	if(hdc && getNativeMemoryAddress(environment, address, hdc)) return NULL;
	HDC context = reinterpret_cast<HDC>(address);
	return SetBkColor(context, static_cast<COLORREF>(color));
}
