#include <Windows.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"
#include "javahelper.h"

JNIEXPORT jobject JNICALL Java_com_khopan_win32_Win32_CreateCompatibleBitmap(JNIEnv* environment, jclass wn32, jobject hdc, jint cx, jint cy) {
	long long address = NULL;
	if(hdc && getNativeMemoryAddress(environment, address, hdc)) return NULL;
	HDC context = reinterpret_cast<HDC>(address);
	HBITMAP bitmap = CreateCompatibleBitmap(context, cx, cy);
	jobject result = NULL;
	if(getJavaMemoryAddress(environment, result, reinterpret_cast<long long>(bitmap), "com/khopan/win32/struct/memory/HBITMAP")) return NULL;
	return result;
}
