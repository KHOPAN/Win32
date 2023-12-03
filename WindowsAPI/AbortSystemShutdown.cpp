#include <Windows.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"

JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_AbortSystemShutdown(JNIEnv* environment, jclass win32, jstring lpMachineName) {
	const wchar_t* machineName = lpMachineName ? reinterpret_cast<const wchar_t*>(environment->GetStringChars(lpMachineName, NULL)) : NULL;
	jint result = AbortSystemShutdownW(const_cast<LPWSTR>(machineName));
	if(lpMachineName) environment->ReleaseStringChars(lpMachineName, reinterpret_cast<const jchar*>(machineName));
	return result;
}
