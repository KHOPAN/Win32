#include <WinSock2.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"

JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_WSACleanup(JNIEnv* environment, jclass win32) {
	return WSACleanup();
}
