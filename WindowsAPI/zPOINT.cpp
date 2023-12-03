#include <Windows.h>
#include <jni.h>
#include "javahelper.h"

bool getNativePOINT(JNIEnv* environment, POINT& result, jobject input) {
	if(!input) return true;
	jclass pointClass = environment->GetObjectClass(input);
	std::string className;
	if(getClassName(environment, className, pointClass)) return NULL;
	jfieldID xField = environment->GetFieldID(pointClass, "x", "J");

	if(!xField) {
		throwException(environment, "FieldNotFoundException", "Long field 'x' not found in class '" + className + "'!");
		return true;
	}

	jfieldID yField = environment->GetFieldID(pointClass, "y", "J");

	if(!yField) {
		throwException(environment, "FieldNotFoundException", "Long field 'y' not found in class '" + className + "'!");
		return true;
	}

	result.x = static_cast<LONG>(environment->GetLongField(input, xField));
	result.y = static_cast<LONG>(environment->GetLongField(input, yField));
	return false;
}

bool getJavaPOINT(JNIEnv* environment, jobject& result, POINT input) {
	if(!result) {
		jclass pointClass = environment->FindClass("com/khopan/win32/struct/holder/POINT");

		if(!pointClass) {
			throwException(environment, "ClassNotFoundException", "Class 'com.khopan.win32.struct.holder.POINT' not found!");
			return true;
		}

		jmethodID pointConstructor = environment->GetMethodID(pointClass, "<init>", "()V");

		if(!pointConstructor) {
			throwException(environment, "ConstructorNotFoundException", "Constructor 'com.khopan.win32.struct.holder.POINT' not found!");
			return true;
		}

		jobject pointInstance = environment->NewObject(pointClass, pointConstructor);
		result = pointInstance;
	}

	jclass pointClass = environment->GetObjectClass(result);
	std::string className;
	if(getClassName(environment, className, pointClass)) return NULL;
	jfieldID xField = environment->GetFieldID(pointClass, "x", "J");

	if(!xField) {
		throwException(environment, "FieldNotFoundException", "Long field 'x' not found in class '" + className + "'!");
		return true;
	}

	jfieldID yField = environment->GetFieldID(pointClass, "y", "J");

	if(!yField) {
		throwException(environment, "FieldNotFoundException", "Long field 'y' not found in class '" + className + "'!");
		return true;
	}

	environment->SetLongField(result, xField, input.x);
	environment->SetLongField(result, yField, input.y);
	return false;
}
