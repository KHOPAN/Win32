#include <mfapi.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"
#include "javahelper.h"

JNIEXPORT jlong JNICALL Java_com_khopan_win32_Win32_MFCreateAttributes(JNIEnv* environment, jclass win32, jobject ppMFAttributes, jint cInitialSize) {
	IMFAttributes* attributes = NULL;
	jlong result = MFCreateAttributes(ppMFAttributes ? &attributes : NULL, cInitialSize);
	if(ppMFAttributes && getJavaMemoryAddress(environment, ppMFAttributes, reinterpret_cast<long long>(attributes), "com/khopan/win32/mediafoundation/IMFAttributes")) return E_FAIL;
	return result;
}
