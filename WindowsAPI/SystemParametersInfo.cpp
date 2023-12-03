#include <Windows.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"

JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_SystemParametersInfo(JNIEnv* environment, jclass win32, jint uiAction, jint uiParam, jlong pvParam, jint fWinIni) {
	return static_cast<long>(SystemParametersInfoA(uiAction, uiParam, reinterpret_cast<void*>(pvParam), fWinIni));
}
