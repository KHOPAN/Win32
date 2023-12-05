#include <string>
#include <WinSock2.h>
#include <jni.h>
#include "javahelper.h"

bool getNativeWSADATA(JNIEnv* environment, WSADATA& result, jobject input) {
	if(!input) return true;
	jclass wsaDataClass = environment->GetObjectClass(input);
	std::string className;
	if(getClassName(environment, className, wsaDataClass)) return NULL;
	jfieldID wVersionField = environment->GetFieldID(wsaDataClass, "wVersion", "I");

	if(!wVersionField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'wVersion' not found in class '" + className + "'!");
		return true;
	}

	jfieldID wHighVersionField = environment->GetFieldID(wsaDataClass, "wHighVersion", "I");

	if(!wHighVersionField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'wHighVersion' not found in class '" + className + "'!");
		return true;
	}

	jfieldID iMaxSocketsField = environment->GetFieldID(wsaDataClass, "iMaxSockets", "I");

	if(!iMaxSocketsField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'iMaxSockets' not found in class '" + className + "'!");
		return true;
	}

	jfieldID iMaxUdpDgField = environment->GetFieldID(wsaDataClass, "iMaxUdpDg", "I");

	if(!iMaxUdpDgField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'iMaxUdpDg' not found in class '" + className + "'!");
		return true;
	}

	jfieldID lpVendorInfoField = environment->GetFieldID(wsaDataClass, "lpVendorInfo", "Ljava/lang/String;");

	if(!lpVendorInfoField) {
		throwException(environment, "FieldNotFoundException", "String field 'lpVendorInfo' not found in class '" + className + "'!");
		return true;
	}

	jfieldID szDescriptionField = environment->GetFieldID(wsaDataClass, "szDescription", "Ljava/lang/String;");

	if(!szDescriptionField) {
		throwException(environment, "FieldNotFoundException", "String field 'szDescription' not found in class '" + className + "'!");
		return true;
	}

	jfieldID szSystemStatusField = environment->GetFieldID(wsaDataClass, "szSystemStatus", "Ljava/lang/String;");

	if(!szSystemStatusField) {
		throwException(environment, "FieldNotFoundException", "String field 'szSystemStatus' not found in class '" + className + "'!");
		return true;
	}
	
	result.wVersion = static_cast<WORD>(environment->GetIntField(input, wVersionField));
	result.wHighVersion = static_cast<WORD>(environment->GetIntField(input, wHighVersionField));
	result.iMaxSockets = static_cast<unsigned short>(environment->GetIntField(input, iMaxSocketsField));
	result.iMaxUdpDg = static_cast<unsigned short>(environment->GetIntField(input, iMaxUdpDgField));
	jstring lpVendorInfo = static_cast<jstring>(environment->GetObjectField(input, lpVendorInfoField));

	if(lpVendorInfo) {
		result.lpVendorInfo = reinterpret_cast<char*>(const_cast<jchar*>(environment->GetStringChars(lpVendorInfo, NULL)));
	}

	jstring szDescription = static_cast<jstring>(environment->GetObjectField(input, szDescriptionField));

	if(szDescription) {
		jsize szDescriptionLength = environment->GetStringLength(szDescription);
		jsize limit = WSADESCRIPTION_LEN + 1;
		const jchar* string = environment->GetStringChars(szDescription, NULL);

		for(jsize i = 0; i < min(szDescriptionLength, limit); i++) {
			result.szDescription[i] = static_cast<char>(string[i]);
		}
	}

	jstring szSystemStatus = static_cast<jstring>(environment->GetObjectField(input, szSystemStatusField));

	if(szSystemStatus) {
		jsize szSystemStatusLength = environment->GetStringLength(szSystemStatus);
		jsize limit = WSASYS_STATUS_LEN + 1;
		const jchar* string = environment->GetStringChars(szDescription, NULL);

		for(jsize i = 0; i < min(szSystemStatusLength, limit); i++) {
			result.szSystemStatus[i] = static_cast<char>(string[i]);
		}
	}

	return false;
}

bool getJavaWSADATA(JNIEnv* environment, jobject& result, WSADATA input) {
	if(!result) {
		jclass wsaDataClass = environment->FindClass("com/khopan/win32/struct/holder/WSADATA");

		if(!wsaDataClass) {
			throwException(environment, "ClassNotFoundException", "Class 'com.khopan.win32.struct.holder.WSADATA' not found!");
			return true;
		}

		jmethodID wsaDataConstructor = environment->GetMethodID(wsaDataClass, "<init>", "()V");

		if(!wsaDataConstructor) {
			throwException(environment, "ConstructorNotFoundException", "Constructor 'com.khopan.win32.struct.holder.WSADATA' not found!");
			return true;
		}

		jobject wsaDataInstance = environment->NewObject(wsaDataClass, wsaDataConstructor);
		result = wsaDataInstance;
	}

	jclass wsaDataClass = environment->GetObjectClass(result);
	std::string className;
	if(getClassName(environment, className, wsaDataClass)) return NULL;
	jfieldID wVersionField = environment->GetFieldID(wsaDataClass, "wVersion", "I");

	if(!wVersionField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'wVersion' not found in class '" + className + "'!");
		return true;
	}

	jfieldID wHighVersionField = environment->GetFieldID(wsaDataClass, "wHighVersion", "I");

	if(!wHighVersionField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'wHighVersion' not found in class '" + className + "'!");
		return true;
	}

	jfieldID iMaxSocketsField = environment->GetFieldID(wsaDataClass, "iMaxSockets", "I");

	if(!iMaxSocketsField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'iMaxSockets' not found in class '" + className + "'!");
		return true;
	}

	jfieldID iMaxUdpDgField = environment->GetFieldID(wsaDataClass, "iMaxUdpDg", "I");

	if(!iMaxUdpDgField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'iMaxUdpDg' not found in class '" + className + "'!");
		return true;
	}

	jfieldID lpVendorInfoField = environment->GetFieldID(wsaDataClass, "lpVendorInfo", "Ljava/lang/String;");

	if(!lpVendorInfoField) {
		throwException(environment, "FieldNotFoundException", "String field 'lpVendorInfo' not found in class '" + className + "'!");
		return true;
	}

	jfieldID szDescriptionField = environment->GetFieldID(wsaDataClass, "szDescription", "Ljava/lang/String;");

	if(!szDescriptionField) {
		throwException(environment, "FieldNotFoundException", "String field 'szDescription' not found in class '" + className + "'!");
		return true;
	}

	jfieldID szSystemStatusField = environment->GetFieldID(wsaDataClass, "szSystemStatus", "Ljava/lang/String;");

	if(!szSystemStatusField) {
		throwException(environment, "FieldNotFoundException", "String field 'szSystemStatus' not found in class '" + className + "'!");
		return true;
	}

	environment->SetIntField(result, wVersionField, input.wVersion);
	environment->SetIntField(result, wHighVersionField, input.wHighVersion);
	environment->SetIntField(result, iMaxSocketsField, input.iMaxSockets);
	environment->SetIntField(result, iMaxUdpDgField, input.iMaxUdpDg);

	if(input.lpVendorInfo) {
		jstring lpVendorInfo = environment->NewStringUTF(input.lpVendorInfo);
		environment->SetObjectField(result, lpVendorInfoField, lpVendorInfo);
	}

	jstring szDescription = environment->NewStringUTF(input.szDescription);
	environment->SetObjectField(result, szDescriptionField, szDescription);
	jstring szSystemStatus = environment->NewStringUTF(input.szSystemStatus);
	environment->SetObjectField(result, szSystemStatusField, szSystemStatus);
	return false;
}
