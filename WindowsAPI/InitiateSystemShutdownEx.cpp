#include <Windows.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"

JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_InitiateSystemShutdownEx(JNIEnv* environment, jclass win32, jstring lpMachineName, jstring lpMessage, jlong dwTimeout, jboolean bForceAppsClosed, jboolean bRebootAfterShutdown, jlong dwReason) {
	const wchar_t* machineName = lpMachineName ? reinterpret_cast<const wchar_t*>(environment->GetStringChars(lpMachineName, NULL)) : NULL;
	const wchar_t* message = lpMessage ? reinterpret_cast<const wchar_t*>(environment->GetStringChars(lpMessage, NULL)) : NULL;
	jint result = InitiateSystemShutdownExW(const_cast<LPWSTR>(machineName), const_cast<LPWSTR>(message), static_cast<DWORD>(dwTimeout), bForceAppsClosed, bRebootAfterShutdown, static_cast<DWORD>(dwReason));
	if(lpMachineName) environment->ReleaseStringChars(lpMachineName, reinterpret_cast<const jchar*>(machineName));
	if(lpMessage) environment->ReleaseStringChars(lpMessage, reinterpret_cast<const jchar*>(lpMessage));
	return result;
}
