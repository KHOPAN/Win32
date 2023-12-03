#include <Windows.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"
#include "javahelper.h"

JNIEXPORT jobject JNICALL Java_com_khopan_win32_Win32_GetModuleHandle(JNIEnv* environment, jclass win32, jstring lpModuleName) {
	const char* moduleName = lpModuleName ? environment->GetStringUTFChars(lpModuleName, NULL) : NULL;
	HINSTANCE instance = GetModuleHandleA(moduleName);
	if(lpModuleName) environment->ReleaseStringUTFChars(lpModuleName, moduleName);
	jobject hInstance = NULL;
	if(getJavaMemoryAddress(environment, hInstance, reinterpret_cast<long long>(instance), "com/khopan/win32/struct/memory/HINSTANCE")) return NULL;
	return hInstance;
}
