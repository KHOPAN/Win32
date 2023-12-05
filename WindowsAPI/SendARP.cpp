#include <string>
#include <WinSock2.h>
#include <iphlpapi.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"
#include "javahelper.h"

JNIEXPORT jlong JNICALL Java_com_khopan_win32_Win32_SendARP(JNIEnv* environment, jclass win32, jlong DestIP, jlong SrcIP, jbyteArray pMacAddr, jobject PhyAddrLen) {
	jbyte* byteArray = pMacAddr ? environment->GetByteArrayElements(pMacAddr, NULL) : NULL;
	ULONG length = 0;
	ULONG* address = NULL;
	jmethodID setMethod = NULL;

	if(PhyAddrLen) {
		jclass mutableIntegerClass = environment->GetObjectClass(PhyAddrLen);
		std::string className;
		if(getClassName(environment, className, mutableIntegerClass)) return true;
		jmethodID getMethod = environment->GetMethodID(mutableIntegerClass, "get", "()I");

		if(!getMethod) {
			throwException(environment, "MethodNotFoundException", "Method 'get()' of signature '()I' not found in class '" + className + "'!");
			return ERROR_INVALID_PARAMETER;
		}

		setMethod = environment->GetMethodID(mutableIntegerClass, "set", "(I)V");

		if(!setMethod) {
			throwException(environment, "MethodNotFoundException", "Method 'set()' of signature '(I)V' not found in class '" + className + "'!");
			return ERROR_INVALID_PARAMETER;
		}

		length = environment->CallIntMethod(PhyAddrLen, getMethod);
		address = &length;
	}

	jlong result = SendARP(static_cast<ULONG>(DestIP), static_cast<ULONG>(SrcIP), byteArray, address);

	if(pMacAddr) {
		environment->SetByteArrayRegion(pMacAddr, 0, length, byteArray);
	}

	if(PhyAddrLen) {
		environment->CallVoidMethod(PhyAddrLen, setMethod, static_cast<jint>(length));
	}

	return result;
}
