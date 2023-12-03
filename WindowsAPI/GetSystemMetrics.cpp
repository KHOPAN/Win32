#include <Windows.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"

JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_GetSystemMetrics(JNIEnv* environment, jclass win32, jint nIndex) {
	return GetSystemMetrics(nIndex);
}
