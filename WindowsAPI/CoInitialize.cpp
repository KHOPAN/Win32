#include <Windows.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"
#include "javahelper.h"

JNIEXPORT jlong JNICALL Java_com_khopan_win32_Win32_CoInitialize(JNIEnv* environment, jclass win32, jobject lpReserved) {
	long long address = NULL;
	if(lpReserved && getNativeMemoryAddress(environment, address, lpReserved)) return NULL;
	LPVOID reserved = reinterpret_cast<LPVOID>(address);
	return static_cast<jlong>(CoInitialize(reserved));
}
