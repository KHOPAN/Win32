#include <Windows.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"
#include "javahelper.h"

JNIEXPORT void JNICALL Java_com_khopan_win32_Win32_CoTaskMemFree(JNIEnv* environment, jclass win32, jobject pv) {
	long long address = NULL;
	if(pv && getNativeMemoryAddress(environment, address, pv)) return;
	LPVOID lpVoid = reinterpret_cast<LPVOID>(address);
	CoTaskMemFree(lpVoid);
}
