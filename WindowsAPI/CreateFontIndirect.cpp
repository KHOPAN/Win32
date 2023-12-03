#include <Windows.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"
#include "javahelper.h"

JNIEXPORT jobject JNICALL Java_com_khopan_win32_Win32_CreateFontIndirect(JNIEnv* environment, jclass win32, jobject lplf) {
	LOGFONTA logFont = {0};
	if(getNativeLOGFONT(environment, logFont, lplf)) return NULL;
	HFONT font = CreateFontIndirectA(&logFont);
	jobject result = NULL;
	if(getJavaMemoryAddress(environment, result, reinterpret_cast<long long>(font), "com/khopan/win32/struct/memory/HFONT")) return NULL;
	return result;
}
