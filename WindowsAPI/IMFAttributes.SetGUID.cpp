#include <mfapi.h>
#include <jni.h>
#include "com_khopan_win32_mediafoundation_IMFAttributes.h"
#include "javahelper.h"

JNIEXPORT jlong JNICALL Java_com_khopan_win32_mediafoundation_IMFAttributes_SetGUID(JNIEnv* environment, jobject imfAttributesInstance, jobject guidKey, jobject guidValue) {
	long long address = NULL;
	if(getNativeMemoryAddress(environment, address, imfAttributesInstance)) return E_FAIL;
	IMFAttributes* attributes = reinterpret_cast<IMFAttributes*>(address);
	GUID key;
	if(guidKey && getNativeGUID(environment, key, guidKey)) return E_FAIL;
	GUID value;
	if(guidValue && getNativeGUID(environment, value, guidValue)) return E_FAIL;
	return attributes->SetGUID(key, value);
}
