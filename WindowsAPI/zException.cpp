#include <string>
#include <jni.h>
#include "javahelper.h"

void throwRuntimeException(JNIEnv* environment, const std::string& message) {
	jclass runtimeExceptionClass = environment->FindClass("java/lang/RuntimeException");

	if(!runtimeExceptionClass) {
		environment->FatalError("Class 'java.lang.RuntimeException' not found! Maybe broken JDK");
	}

	jmethodID runtimeExceptionConstructor = environment->GetMethodID(runtimeExceptionClass, "<init>", "(Ljava/lang/String;)V");

	if(!runtimeExceptionConstructor) {
		environment->FatalError("Constructor 'java.lang.RuntimeException(String)' not found!");
	}

	jstring javaMessage = environment->NewStringUTF(message.c_str());
	jobject runtimeException = environment->NewObject(runtimeExceptionClass, runtimeExceptionConstructor, javaMessage);

	if(environment->Throw((jthrowable) runtimeException) != 0) {
		environment->FatalError("Error while throwing Java exception in native code");
	}
}

void throwException(JNIEnv* environment, const std::string& exception, const std::string& message) {
	std::string className = "com/khopan/win32/exception/" + exception;
	const char* classNameConstChar = className.c_str();
	jclass exceptionClass = environment->FindClass(classNameConstChar);

	if(!exceptionClass) {
		throwRuntimeException(environment, "Exception class 'com.khopan.win32.exception." + exception + "' not found!");
		return;
	}

	jmethodID exceptionConstructor = environment->GetMethodID(exceptionClass, "<init>", "(Ljava/lang/String;)V");

	if(!exceptionConstructor) {
		throwRuntimeException(environment, "Exception constructor 'com.khopan.win32.exception." + exception + "(String)' not found!");
		return;
	}

	jstring javaMessage = environment->NewStringUTF(message.c_str());
	jobject exceptionInstance = environment->NewObject(exceptionClass, exceptionConstructor, javaMessage);

	if(environment->Throw(static_cast<jthrowable>(exceptionInstance)) != 0) {
		throwRuntimeException(environment, "Error while throwing Java exception in native code");
	}
}
