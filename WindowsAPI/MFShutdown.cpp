#include <mfapi.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"

JNIEXPORT jlong JNICALL Java_com_khopan_win32_Win32_MFShutdown(JNIEnv* environment, jclass win32) {
	return MFShutdown();
}
