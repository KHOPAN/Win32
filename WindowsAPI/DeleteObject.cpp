#include <Windows.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"

JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_DeleteObject(JNIEnv* environment, jclass win32, jlong ho) {
	return DeleteObject(reinterpret_cast<HGDIOBJ>(ho));
}
