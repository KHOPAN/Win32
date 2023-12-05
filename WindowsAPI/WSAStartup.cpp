#include <WinSock2.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"
#include "javahelper.h"

JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_WSAStartup(JNIEnv* environment, jclass win32, jint wVersionRequested, jobject lpWSAData) {
	WSADATA data = {0};
	jint result = WSAStartup(static_cast<WORD>(wVersionRequested), lpWSAData ? &data : NULL);
	if(lpWSAData && getJavaWSADATA(environment, lpWSAData, data)) return WSAEFAULT;
	return result;
}
