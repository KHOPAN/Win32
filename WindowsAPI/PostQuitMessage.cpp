#include <Windows.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"

JNIEXPORT void JNICALL Java_com_khopan_win32_Win32_PostQuitMessage(JNIEnv* environment, jclass win32, jint nExitCode) {
	PostQuitMessage(nExitCode);
}
