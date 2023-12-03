#include <string>
#include <jni.h>
#include "javahelper.h"

bool getClassName(JNIEnv* environment, std::string& result, jclass inputClass) {
	jclass classClass = environment->FindClass("java/lang/Class");

	if(!classClass) {
		throwException(environment, "ClassNotFoundException", "Class 'java.lang.Class' not found!");
		return true;
	}

	jmethodID getNameMethod = environment->GetMethodID(classClass, "getName", "()Ljava/lang/String;");

	if(!getNameMethod) {
		throwException(environment, "MethodNotFoundException", "Method 'getName()' not found in class 'java.lang.Class'!");
		return true;
	}

	jobject className = environment->CallObjectMethod(inputClass, getNameMethod);

	if(!className) {
		result = "null";
		return false;
	}

	jstring stringClassName = static_cast<jstring>(className);
	const char* name = environment->GetStringUTFChars(stringClassName, NULL);
	result = std::string(name);
	return false;
}
