#include <Windows.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"
#include "javahelper.h"

JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_BitBlt(JNIEnv* environment, jclass win32, jobject hdc, jint x, jint y, jint cx, jint cy, jobject hdcSrc, jint x1, jint y1, jlong rop) {
	long long contextAddress = NULL;
	if(hdc && getNativeMemoryAddress(environment, contextAddress, hdc)) return NULL;
	HDC context = reinterpret_cast<HDC>(contextAddress);
	long long sourceContextAddress = NULL;
	if(hdcSrc && getNativeMemoryAddress(environment, sourceContextAddress, hdcSrc)) return NULL;
	HDC sourceContext = reinterpret_cast<HDC>(sourceContextAddress);
	return BitBlt(context, x, y, cx, cy, sourceContext, x1, y1, rop);
}
