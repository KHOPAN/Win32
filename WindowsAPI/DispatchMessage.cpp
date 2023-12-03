#include <Windows.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"
#include "javahelper.h"

JNIEXPORT jlong JNICALL Java_com_khopan_win32_Win32_DispatchMessage(JNIEnv* environment, jclass win32, jobject lpMsg) {
	if(!lpMsg) return 0;
	MSG message = {0};
	if(lpMsg && getNativeMSG(environment, message, lpMsg)) return 0;
	long long result = DispatchMessageA(&message);
	if(getJavaMSG(environment, lpMsg, message)) return 0;
	return result;
}