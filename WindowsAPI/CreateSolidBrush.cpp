#include <Windows.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"
#include "javahelper.h"

JNIEXPORT jobject JNICALL Java_com_khopan_win32_Win32_CreateSolidBrush(JNIEnv* environment, jclass win32, jlong color) {
	HBRUSH brush = CreateSolidBrush(color);
	long long address = reinterpret_cast<long long>(brush);
	jobject result = NULL;
	if(getJavaMemoryAddress(environment, result, address, "com/khopan/win32/struct/memory/HBRUSH")) return NULL;
	return result;
}
