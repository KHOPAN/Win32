#include <Windows.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"

JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_ExitWindowsEx(JNIEnv* environment, jclass win32, jint uFlags, jlong dwReason) {
	return ExitWindowsEx(uFlags, static_cast<DWORD>(dwReason));
}
