#include <Windows.h>
#include <jni.h>
#include "javahelper.h"

bool getNativeRECT(JNIEnv* environment, RECT& result, jobject input) {
	if(!input) return true;
	jclass rectClass = environment->GetObjectClass(input);
	std::string className;
	if(getClassName(environment, className, rectClass)) return true;
	jfieldID leftField = environment->GetFieldID(rectClass, "left", "I");

	if(!leftField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'left' not found in class '" + className + "'!");
		return true;
	}

	jfieldID topField = environment->GetFieldID(rectClass, "top", "I");

	if(!topField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'top' not found in class '" + className + "'!");
		return true;
	}

	jfieldID rightField = environment->GetFieldID(rectClass, "right", "I");

	if(!rightField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'right' not found in class '" + className + "'!");
		return true;
	}

	jfieldID bottomField = environment->GetFieldID(rectClass, "bottom", "I");

	if(!bottomField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'bottom' not found in class '" + className + "'!");
		return true;
	}

	result.left = environment->GetIntField(input, leftField);
	result.top = environment->GetIntField(input, topField);
	result.right = environment->GetIntField(input, rightField);
	result.bottom = environment->GetIntField(input, bottomField);
	return false;
}

bool getJavaRECT(JNIEnv* environment, jobject& result, RECT input) {
	if(!result) {
		jclass rectClass = environment->FindClass("com/khopan/win32/struct/holder/RECT");

		if(!rectClass) {
			throwException(environment, "ClassNotFoundException", "Class 'com.khopan.win32.struct.holder.RECT' not found!");
			return true;
		}

		jmethodID rectConstructor = environment->GetMethodID(rectClass, "<init>", "()V");

		if(!rectConstructor) {
			throwException(environment, "ConstructorNotFoundException", "Constructor 'com.khopan.win32.struct.holder.RECT()' not found!");
			return true;
		}

		jobject rectInstance = environment->NewObject(rectClass, rectConstructor);
		result = rectInstance;
	}

	jclass rectClass = environment->GetObjectClass(result);
	std::string className;
	if(getClassName(environment, className, rectClass)) return true;
	jfieldID leftField = environment->GetFieldID(rectClass, "left", "I");

	if(!leftField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'left' not found in class '" + className + "'!");
		return true;
	}

	jfieldID topField = environment->GetFieldID(rectClass, "top", "I");

	if(!topField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'top' not found in class '" + className + "'!");
		return true;
	}

	jfieldID rightField = environment->GetFieldID(rectClass, "right", "I");

	if(!rightField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'right' not found in class '" + className + "'!");
		return true;
	}

	jfieldID bottomField = environment->GetFieldID(rectClass, "bottom", "I");

	if(!bottomField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'bottom' not found in class '" + className + "'!");
		return true;
	}

	environment->SetIntField(result, leftField, input.left);
	environment->SetIntField(result, topField, input.top);
	environment->SetIntField(result, rightField, input.right);
	environment->SetIntField(result, bottomField, input.bottom);
	return false;
}
