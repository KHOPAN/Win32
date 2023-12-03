#include <Windows.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"

JNIEXPORT jstring JNICALL Java_com_khopan_win32_Win32_FormatErrorMessage(JNIEnv* environment, jclass win32, jlong errorCode) {
	if(errorCode == 0) {
		return NULL;
	}

	wchar_t* messageBuffer = NULL;
	size_t size = FormatMessageW(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS, NULL, static_cast<DWORD>(errorCode), MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), reinterpret_cast<LPWSTR>(&messageBuffer), 0, NULL);
	jstring string = environment->NewString(reinterpret_cast<jchar*>(messageBuffer), static_cast<jsize>(size));
	LocalFree(messageBuffer);
	return string;
}
