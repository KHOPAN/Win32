#include <Windows.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"
#include "javahelper.h"

JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_TranslateMessage(JNIEnv* environment, jclass win32, jobject lpMsg) {
	if(!lpMsg) return 0;
	MSG message = {0};
	if(lpMsg && getNativeMSG(environment, message, lpMsg)) return 0;
	int result = TranslateMessage(&message);
	if(getJavaMSG(environment, lpMsg, message)) return 0;
	return result;
}
