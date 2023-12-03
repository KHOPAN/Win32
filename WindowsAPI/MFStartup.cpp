#include <mfapi.h>
#include <mfidl.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"

JNIEXPORT jlong JNICALL Java_com_khopan_win32_Win32_MFStartup(JNIEnv* environment, jclass win32, jlong Version, jlong dwFlags) {
	return MFStartup(static_cast<ULONG>(Version), static_cast<DWORD>(dwFlags));
}
