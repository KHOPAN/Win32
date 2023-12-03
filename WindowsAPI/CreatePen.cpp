#include <Windows.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"
#include "javahelper.h"

JNIEXPORT jobject JNICALL Java_com_khopan_win32_Win32_CreatePen(JNIEnv* environment, jclass win32, jint iStyle , jint cWidth, jlong color) {
	HPEN pen = CreatePen(iStyle, cWidth, color);
	long long address = reinterpret_cast<long long>(pen);
	jobject result = NULL;
	if(getJavaMemoryAddress(environment, result, address, "com/khopan/win32/struct/memory/HPEN")) return NULL;
	return result;
}
