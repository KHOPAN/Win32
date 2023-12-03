#include <string>
#include <jni.h>
#include "javahelper.h"

bool getNativeMemoryAddress(JNIEnv* environment, long long& result, jobject memoryInstance) {
	if(!memoryInstance) return true;
	jclass memoryClass = environment->GetObjectClass(memoryInstance);
	jfieldID memoryAddressField = environment->GetFieldID(memoryClass, "memoryAddress", "J");

	if(!memoryAddressField) {
		std::string className;
		if(getClassName(environment, className, memoryClass)) return true;
		throwException(environment, "FieldNotFoundException", "Long field 'memoryAddress' missing in class '" + className + "'!");
		return true;
	}

	long long value = environment->GetLongField(memoryInstance, memoryAddressField);
	result = value;
	return false;
}

std::string translateClassName(const std::string& input) {
	std::string result = input;

	for(int i = 0; i < result.length(); i++) {
		if(result[i] == '/') {
			result[i] = '.';
		}
	}

	return result;
}

bool getJavaMemoryAddress(JNIEnv* environment, jobject& result, long long memoryAddress, const std::string& className) {
	if(result == NULL) {
		jclass memoryClass = environment->FindClass(className.c_str());

		if(!memoryClass) {
			throwException(environment, "ClassNotFoundException", "Class '" + translateClassName(className) + "' not found!");
			return true;
		}

		jmethodID memoryConstructor = environment->GetMethodID(memoryClass, "<init>", "()V");

		if(!memoryConstructor) {
			throwException(environment, "ConstructorNotFoundException", "Constructor '" + translateClassName(className) + "()' not found!");
			return true;
		}

		jobject instance = environment->NewObject(memoryClass, memoryConstructor);
		result = instance;
	}

	jclass memoryClass = environment->GetObjectClass(result);
	jfieldID memoryAddressField = environment->GetFieldID(memoryClass, "memoryAddress", "J");

	if(!memoryAddressField) {
		std::string translatedClassName;
		if(getClassName(environment, translatedClassName, memoryClass)) return true;
		throwException(environment, "FieldNotFoundException", "Long field 'memoryAddress' missing in class '" + translatedClassName + "'!");
		return true;
	}

	environment->SetLongField(result, memoryAddressField, memoryAddress);
	return false;
}
