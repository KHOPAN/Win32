#include <Windows.h>
#include <jni.h>
#include "javahelper.h"

bool getNativeRGBQUAD(JNIEnv* environment, RGBQUAD& result, jobject input) {
	if(!input) return true;
	jclass rgbQuadClass = environment->GetObjectClass(input);
	std::string className;
	if(getClassName(environment, className, rgbQuadClass)) return true;
	jfieldID rgbBlueField = environment->GetFieldID(rgbQuadClass, "rgbBlue", "B");

	if(!rgbBlueField) {
		throwException(environment, "FieldNotFoundException", "Byte field 'rgbBlue' not found in class '" + className + "'!");
		return true;
	}

	jfieldID rgbGreenField = environment->GetFieldID(rgbQuadClass, "rgbGreen", "B");

	if(!rgbGreenField) {
		throwException(environment, "FieldNotFoundException", "Byte field 'rgbGreen' not found in class '" + className + "'!");
		return true;
	}

	jfieldID rgbRedField = environment->GetFieldID(rgbQuadClass, "rgbRed", "B");

	if(!rgbRedField) {
		throwException(environment, "FieldNotFoundException", "Byte field 'rgbRed' not found in class '" + className + "'!");
		return true;
	}

	jfieldID rgbReservedField = environment->GetFieldID(rgbQuadClass, "rgbReserved", "B");

	if(!rgbReservedField) {
		throwException(environment, "FieldNotFoundException", "Byte field 'rgbReserved' not found in class '" + className + "'!");
		return true;
	}

	result.rgbBlue = environment->GetByteField(input, rgbBlueField);
	result.rgbGreen = environment->GetByteField(input, rgbGreenField);
	result.rgbRed = environment->GetByteField(input, rgbRedField);
	result.rgbReserved = environment->GetByteField(input, rgbReservedField);
	return false;
}

bool getJavaRGBQUAD(JNIEnv* environment, jobject& result, RGBQUAD input) {
	if(!result) {
		jclass rgbQuadClass = environment->FindClass("com/khopan/win32/struct/holder/RGBQUAD");

		if(!rgbQuadClass) {
			throwException(environment, "ClassNotFoundException", "Class 'com.khopan.win32.struct.holder.RGBQUAD' not found!");
			return true;
		}

		jmethodID rgbQuadConstructor = environment->GetMethodID(rgbQuadClass, "<init>", "()V");

		if(!rgbQuadConstructor) {
			throwException(environment, "ConstructorNotFoundException", "Constructor 'com.khopan.win32.struct.holder.RGBQUAD()' not found!");
			return true;
		}

		jobject rgbQuadInstance = environment->NewObject(rgbQuadClass, rgbQuadConstructor);
		result = rgbQuadInstance;
	}

	jclass rgbQuadClass = environment->GetObjectClass(result);
	std::string className;
	if(getClassName(environment, className, rgbQuadClass)) return true;
	jfieldID rgbBlueField = environment->GetFieldID(rgbQuadClass, "rgbBlue", "B");

	if(!rgbBlueField) {
		throwException(environment, "FieldNotFoundException", "Byte field 'rgbBlue' not found in class '" + className + "'!");
		return true;
	}

	jfieldID rgbGreenField = environment->GetFieldID(rgbQuadClass, "rgbGreen", "B");

	if(!rgbGreenField) {
		throwException(environment, "FieldNotFoundException", "Byte field 'rgbGreen' not found in class '" + className + "'!");
		return true;
	}

	jfieldID rgbRedField = environment->GetFieldID(rgbQuadClass, "rgbRed", "B");

	if(!rgbRedField) {
		throwException(environment, "FieldNotFoundException", "Byte field 'rgbRed' not found in class '" + className + "'!");
		return true;
	}

	jfieldID rgbReservedField = environment->GetFieldID(rgbQuadClass, "rgbReserved", "B");

	if(!rgbReservedField) {
		throwException(environment, "FieldNotFoundException", "Byte field 'rgbReserved' not found in class '" + className + "'!");
		return true;
	}

	environment->SetByteField(result, rgbBlueField, input.rgbBlue);
	environment->SetByteField(result, rgbGreenField, input.rgbGreen);
	environment->SetByteField(result, rgbRedField, input.rgbRed);
	environment->SetByteField(result, rgbReservedField, input.rgbReserved);
	return false;
}
