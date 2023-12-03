#include <Windows.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"
#include "javahelper.h"

JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_GetMessage(JNIEnv* environment, jclass win32, jobject lpMsg, jobject hWnd, jint wMsgFilterMin, jint wMsgFilterMax) {
	if(!lpMsg) return 0;
	MSG message = {0};
	if(getNativeMSG(environment, message, lpMsg)) return 0;
	long long address = NULL;
	if(hWnd && getNativeMemoryAddress(environment, address, hWnd)) return 0;
	long result = GetMessageA(&message, reinterpret_cast<HWND>(address), wMsgFilterMin, wMsgFilterMax);
	if(getJavaMSG(environment, lpMsg, message)) return 0;
	return result;
}
