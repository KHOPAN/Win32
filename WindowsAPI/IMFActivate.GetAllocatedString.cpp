#include <mfapi.h>
#include <jni.h>
#include "com_khopan_win32_mediafoundation_IMFActivate.h"
#include "javahelper.h"

JNIEXPORT jlong JNICALL Java_com_khopan_win32_mediafoundation_IMFActivate_GetAllocatedString(JNIEnv* environment, jobject imfActivatesInstance, jobject guidKey, jobject ppwszValue) {
	long long address = NULL;
	if(getNativeMemoryAddress(environment, address, imfActivatesInstance)) return E_FAIL;
	IMFActivate* activate = reinterpret_cast<IMFActivate*>(address);
	GUID key;
	if(guidKey && getNativeGUID(environment, key, guidKey)) return E_FAIL;
	LPWSTR value = NULL;
	UINT32 length = 0;
	jlong result = activate->GetAllocatedString(key, &value, &length);

	if(length == 0 || !ppwszValue) {
		return result;
	}

	jclass mutableStringClass = environment->GetObjectClass(ppwszValue);
	std::string className;
	if(getClassName(environment, className, mutableStringClass)) return true;
	jmethodID setMethod = environment->GetMethodID(mutableStringClass, "set", "(Ljava/lang/String;)V");

	if(!setMethod) {
		throwException(environment, "MethodNotFoundException", "Method 'set()' of signature '(Ljava/lang/String;)V' not found in class '" + className + "'!");
		CoTaskMemFree(value);
		return result;
	}

	jstring string = environment->NewString(reinterpret_cast<jchar*>(value), length);
	environment->CallVoidMethod(ppwszValue, setMethod, string);
	CoTaskMemFree(value);
	return result;
}
