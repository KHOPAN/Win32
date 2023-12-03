#include <Windows.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"
#include "javahelper.h"

JNIEXPORT jlong JNICALL Java_com_khopan_win32_Win32_SelectObject(JNIEnv* environment, jclass win32, jobject hdc, jlong h) {
	long long contextAddress = NULL;
	if(hdc && getNativeMemoryAddress(environment, contextAddress, hdc)) return NULL;
	HDC context = reinterpret_cast<HDC>(contextAddress);
	HGDIOBJ object = reinterpret_cast<HGDIOBJ>(h);
	return reinterpret_cast<long long>(SelectObject(context, object));
}
