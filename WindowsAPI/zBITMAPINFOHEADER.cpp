#include <Windows.h>
#include <jni.h>
#include "javahelper.h"

bool getNativeBITMAPINFOHEADER(JNIEnv* environment, BITMAPINFOHEADER& result, jobject input) {
	if(!input) return true;
	jclass bitmapInfoHeaderClass = environment->GetObjectClass(input);
	std::string className;
	if(getClassName(environment, className, bitmapInfoHeaderClass)) return true;
	jfieldID biSizeField = environment->GetFieldID(bitmapInfoHeaderClass, "biSize", "J");

	if(!biSizeField) {
		throwException(environment, "FieldNotFoundException", "Long field 'biSize' not found in class '" + className + "'!");
		return true;
	}

	jfieldID biWidthField = environment->GetFieldID(bitmapInfoHeaderClass, "biWidth", "J");

	if(!biWidthField) {
		throwException(environment, "FieldNotFoundException", "Long field 'biWidth' not found in class '" + className + "'!");
		return true;
	}

	jfieldID biHeightField = environment->GetFieldID(bitmapInfoHeaderClass, "biHeight", "J");

	if(!biHeightField) {
		throwException(environment, "FieldNotFoundException", "Long field 'biHeight' not found in class '" + className + "'!");
		return true;
	}

	jfieldID biPlanesField = environment->GetFieldID(bitmapInfoHeaderClass, "biPlanes", "I");

	if(!biPlanesField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'biPlanes' not found in class '" + className + "'!");
		return true;
	}

	jfieldID biBitCountField = environment->GetFieldID(bitmapInfoHeaderClass, "biBitCount", "I");

	if(!biBitCountField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'biBitCount' not found in class '" + className + "'!");
		return true;
	}

	jfieldID biCompressionField = environment->GetFieldID(bitmapInfoHeaderClass, "biCompression", "J");

	if(!biCompressionField) {
		throwException(environment, "FieldNotFoundException", "Long field 'biCompression' not found in class '" + className + "'!");
		return true;
	}

	jfieldID biSizeImageField = environment->GetFieldID(bitmapInfoHeaderClass, "biSizeImage", "J");

	if(!biSizeImageField) {
		throwException(environment, "FieldNotFoundException", "Long field 'biSizeImage' not found in class '" + className + "'!");
		return true;
	}

	jfieldID biXPelsPerMeterField = environment->GetFieldID(bitmapInfoHeaderClass, "biXPelsPerMeter", "J");

	if(!biXPelsPerMeterField) {
		throwException(environment, "FieldNotFoundException", "Long field 'biXPelsPerMeter' not found in class '" + className + "'!");
		return true;
	}

	jfieldID biYPelsPerMeterField = environment->GetFieldID(bitmapInfoHeaderClass, "biYPelsPerMeter", "J");

	if(!biYPelsPerMeterField) {
		throwException(environment, "FieldNotFoundException", "Long field 'biYPelsPerMeter' not found in class '" + className + "'!");
		return true;
	}

	jfieldID biClrUsedField = environment->GetFieldID(bitmapInfoHeaderClass, "biClrUsed", "J");

	if(!biClrUsedField) {
		throwException(environment, "FieldNotFoundException", "Long field 'biClrUsed' not found in class '" + className + "'!");
		return true;
	}

	jfieldID biClrImportantField = environment->GetFieldID(bitmapInfoHeaderClass, "biClrImportant", "J");

	if(!biClrImportantField) {
		throwException(environment, "FieldNotFoundException", "Long field 'biClrImportant' not found in class '" + className + "'!");
		return true;
	}

	result.biSize = environment->GetLongField(input, biSizeField);
	result.biWidth = environment->GetLongField(input, biWidthField);
	result.biHeight = environment->GetLongField(input, biHeightField);
	result.biPlanes = environment->GetIntField(input, biPlanesField);
	result.biBitCount = environment->GetIntField(input, biBitCountField);
	result.biCompression = environment->GetLongField(input, biCompressionField);
	result.biSizeImage = environment->GetLongField(input, biSizeImageField);
	result.biXPelsPerMeter = environment->GetLongField(input, biXPelsPerMeterField);
	result.biYPelsPerMeter = environment->GetLongField(input, biYPelsPerMeterField);
	result.biClrUsed = environment->GetLongField(input, biClrUsedField);
	result.biClrImportant = environment->GetLongField(input, biClrImportantField);
	return false;
}

bool getJavaBITMAPINFOHEADER(JNIEnv* environment, jobject& result, BITMAPINFOHEADER input) {
	if(!result) {
		jclass bitmapInfoHeaderClass = environment->FindClass("com/khopan/win32/struct/holder/BITMAPINFOHEADER");
	
		if(!bitmapInfoHeaderClass) {
			throwException(environment, "ClassNotFoundException", "Class 'com.khopan.win32.struct.holder.BITMAPINFOHEADER' not found!");
			return true;
		}

		jmethodID bitmapInfoHeaderConstructor = environment->GetMethodID(bitmapInfoHeaderClass, "<init>", "()V");
	
		if(!bitmapInfoHeaderConstructor) {
			throwException(environment, "ConstructorNotFoundException", "Constructor 'com.khopan.win32.struct.holder.BITMAPINFOHEADER()' not found!");
			return true;
		}

		jobject bitmapInfoHeaderInstance = environment->NewObject(bitmapInfoHeaderClass, bitmapInfoHeaderConstructor);
		result = bitmapInfoHeaderInstance;
	}

	jclass bitmapInfoHeaderClass = environment->GetObjectClass(result);
	std::string className;
	if(getClassName(environment, className, bitmapInfoHeaderClass)) return true;
	jfieldID biSizeField = environment->GetFieldID(bitmapInfoHeaderClass, "biSize", "J");

	if(!biSizeField) {
		throwException(environment, "FieldNotFoundException", "Long field 'biSize' not found in class '" + className + "'!");
		return true;
	}

	jfieldID biWidthField = environment->GetFieldID(bitmapInfoHeaderClass, "biWidth", "J");

	if(!biWidthField) {
		throwException(environment, "FieldNotFoundException", "Long field 'biWidth' not found in class '" + className + "'!");
		return true;
	}

	jfieldID biHeightField = environment->GetFieldID(bitmapInfoHeaderClass, "biHeight", "J");

	if(!biHeightField) {
		throwException(environment, "FieldNotFoundException", "Long field 'biHeight' not found in class '" + className + "'!");
		return true;
	}

	jfieldID biPlanesField = environment->GetFieldID(bitmapInfoHeaderClass, "biPlanes", "I");

	if(!biPlanesField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'biPlanes' not found in class '" + className + "'!");
		return true;
	}

	jfieldID biBitCountField = environment->GetFieldID(bitmapInfoHeaderClass, "biBitCount", "I");

	if(!biBitCountField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'biBitCount' not found in class '" + className + "'!");
		return true;
	}

	jfieldID biCompressionField = environment->GetFieldID(bitmapInfoHeaderClass, "biCompression", "J");

	if(!biCompressionField) {
		throwException(environment, "FieldNotFoundException", "Long field 'biCompression' not found in class '" + className + "'!");
		return true;
	}

	jfieldID biSizeImageField = environment->GetFieldID(bitmapInfoHeaderClass, "biSizeImage", "J");

	if(!biSizeImageField) {
		throwException(environment, "FieldNotFoundException", "Long field 'biSizeImage' not found in class '" + className + "'!");
		return true;
	}

	jfieldID biXPelsPerMeterField = environment->GetFieldID(bitmapInfoHeaderClass, "biXPelsPerMeter", "J");

	if(!biXPelsPerMeterField) {
		throwException(environment, "FieldNotFoundException", "Long field 'biXPelsPerMeter' not found in class '" + className + "'!");
		return true;
	}

	jfieldID biYPelsPerMeterField = environment->GetFieldID(bitmapInfoHeaderClass, "biYPelsPerMeter", "J");

	if(!biYPelsPerMeterField) {
		throwException(environment, "FieldNotFoundException", "Long field 'biYPelsPerMeter' not found in class '" + className + "'!");
		return true;
	}

	jfieldID biClrUsedField = environment->GetFieldID(bitmapInfoHeaderClass, "biClrUsed", "J");

	if(!biClrUsedField) {
		throwException(environment, "FieldNotFoundException", "Long field 'biClrUsed' not found in class '" + className + "'!");
		return true;
	}

	jfieldID biClrImportantField = environment->GetFieldID(bitmapInfoHeaderClass, "biClrImportant", "J");

	if(!biClrImportantField) {
		throwException(environment, "FieldNotFoundException", "Long field 'biClrImportant' not found in class '" + className + "'!");
		return true;
	}

	environment->SetLongField(result, biSizeField, input.biSize);
	environment->SetLongField(result, biWidthField, input.biWidth);
	environment->SetLongField(result, biHeightField, input.biHeight);
	environment->SetIntField(result, biPlanesField, input.biPlanes);
	environment->SetIntField(result, biBitCountField, input.biBitCount);
	environment->SetLongField(result, biCompressionField, input.biCompression);
	environment->SetLongField(result, biSizeImageField, input.biSizeImage);
	environment->SetLongField(result, biXPelsPerMeterField, input.biXPelsPerMeter);
	environment->SetLongField(result, biYPelsPerMeterField, input.biYPelsPerMeter);
	environment->SetLongField(result, biClrUsedField, input.biClrUsed);
	environment->SetLongField(result, biClrImportantField, input.biClrImportant);
	return false;
}
