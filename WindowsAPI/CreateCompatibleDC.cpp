#include <Windows.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"
#include "javahelper.h"

JNIEXPORT jobject JNICALL Java_com_khopan_win32_Win32_CreateCompatibleDC(JNIEnv* environment, jclass win32, jobject hdc) {
	long long address = NULL;
	if(hdc && getNativeMemoryAddress(environment, address, hdc)) return NULL;
	HDC context = reinterpret_cast<HDC>(address);
	HDC compatibleContext = CreateCompatibleDC(context);
	jobject result = NULL;
	if(getJavaMemoryAddress(environment, result, reinterpret_cast<long long>(compatibleContext), "com/khopan/win32/struct/memory/HDC")) return NULL;
	return result;
}
