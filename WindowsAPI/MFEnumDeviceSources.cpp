#include <mfidl.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"
#include "javahelper.h"

JNIEXPORT jlong JNICALL Java_com_khopan_win32_Win32_MFEnumDeviceSources(JNIEnv* environment, jclass win32, jobject pAttributes, jobject pppSourceActivate) {
	long long address = NULL;
	if(pAttributes && getNativeMemoryAddress(environment, address, pAttributes)) return E_FAIL;
	IMFAttributes* attributes = reinterpret_cast<IMFAttributes*>(address);
	IMFActivate** activates = NULL;
	UINT32 count = 0;
	jlong result = MFEnumDeviceSources(attributes, &activates, &count);

	if(count == 0 || !pppSourceActivate) {
		return result;
	}

	jclass listClass = environment->GetObjectClass(pppSourceActivate);
	std::string className;
	if(getClassName(environment, className, listClass)) return true;
	jmethodID addMethod = environment->GetMethodID(listClass, "add", "(Ljava/lang/Object;)Z");
	
	if(!addMethod) {
		throwException(environment, "MethodNotFoundException", "Method 'add()' of signature '(Ljava/lang/Object;)Z' not found in class '" + className + "'!");
		CoTaskMemFree(activates);
		return result;
	}

	for(UINT32 i = 0; i < count; i++) {
		IMFActivate* activate = activates[i];
		jobject activateInstance = NULL;
		if(getJavaMemoryAddress(environment, activateInstance, reinterpret_cast<long long>(activate), "com/khopan/win32/mediafoundation/IMFActivate")) continue;
		environment->CallBooleanMethod(pppSourceActivate, addMethod, activateInstance);
	}

	return result;
}
