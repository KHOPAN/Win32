#include <Windows.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"
#include "javahelper.h"

JNIEXPORT jobject JNICALL Java_com_khopan_win32_Win32_LoadCursor(JNIEnv* environment, jclass win32, jobject hInstance, jint cursorType) {
	long long instanceAddress = NULL;
	if(hInstance && getNativeMemoryAddress(environment, instanceAddress, hInstance)) return NULL;
	HINSTANCE instance = reinterpret_cast<HINSTANCE>(instanceAddress);
	HCURSOR cursor = LoadCursorW(instance, MAKEINTRESOURCE(cursorType));
	jobject result = NULL;
	if(getJavaMemoryAddress(environment, result, reinterpret_cast<long long>(cursor), "com/khopan/win32/struct/memory/HCURSOR")) return NULL;
	return result;
}
