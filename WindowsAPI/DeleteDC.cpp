#include <Windows.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"
#include "javahelper.h"

JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_DeleteDC(JNIEnv* environment, jclass win32, jobject hdc) {
	long long address = NULL;
	if(hdc && getNativeMemoryAddress(environment, address, hdc)) return NULL;
	HDC context = reinterpret_cast<HDC>(address);
	return DeleteDC(context);
}
