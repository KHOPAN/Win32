#include <Windows.h>
#include <jni.h>
#include "javahelper.h"

bool getNativeBITMAPINFO(JNIEnv* environment, BITMAPINFO& result, jobject input) {
	if(!input) return true;
	jclass bitmapInfoClass = environment->GetObjectClass(input);
	std::string className;
	if(getClassName(environment, className, bitmapInfoClass)) return true;
	jfieldID bmiHeaderField = environment->GetFieldID(bitmapInfoClass, "bmiHeader", "Lcom/khopan/win32/struct/holder/BITMAPINFOHEADER;");
	
	if(!bmiHeaderField) {
		throwException(environment, "FieldNotFoundException", "Field 'bmiHeader' of type 'com.khopan.win32.struct.holder.BITMAPINFOHEADER' not found in class '" + className + "'!");
		return true;
	}

	jfieldID bmiColorsField = environment->GetFieldID(bitmapInfoClass, "bmiColors", "[Lcom/khopan/win32/struct/holder/RGBQUAD;");

	if(!bmiColorsField) {
		throwException(environment, "FieldNotFoundException", "Array field 'bmiColors' of type 'com.khopan.win32.struct.holder.RGBQUAD[]' not found in class '" + className + "'!");
		return true;
	}

	jobject bmiHeaderInstance = environment->GetObjectField(input, bmiHeaderField);
	BITMAPINFOHEADER infoHeader = {0};
	if(bmiHeaderInstance && getNativeBITMAPINFOHEADER(environment, infoHeader, bmiHeaderInstance)) return true;
	result.bmiHeader = infoHeader;
	jobjectArray array = static_cast<jobjectArray>(environment->GetObjectField(input, bmiColorsField));
	
	if(array) {
		int length = environment->GetArrayLength(array);

		if(length < 1) {
			throwException(environment, "ArrayTooShortException", "Array field 'bmiColors' of type 'com.khopan.win32.struct.holder.RGBQUAD[]' in class '" + className + "' must have the size greater than or equal to 1!");
			return true;
		}

		for(int i = 0; i < 1; i++) {
			jobject rgbQuadInstance = environment->GetObjectArrayElement(array, i);
			RGBQUAD quad = {0};
			if(rgbQuadInstance && getNativeRGBQUAD(environment, quad, rgbQuadInstance)) return true;
			result.bmiColors[i] = quad;
		}
	}

	return false;
}

bool getJavaBITMAPINFO(JNIEnv* environment, jobject& result, BITMAPINFO input) {
	if(!result) {
		jclass bitmapInfoClass = environment->FindClass("com/khopan/win32/struct/holder/BITMAPINFO");

		if(!bitmapInfoClass) {
			throwException(environment, "ClassNotFoundException", "Class 'com.khopan.win32.struct.holder.BITMAPINFO' not found!");
			return true;
		}

		jmethodID bitmapInfoConstructor = environment->GetMethodID(bitmapInfoClass, "<init>", "()V");

		if(!bitmapInfoConstructor) {
			throwException(environment, "ConstructorNotFoundException", "Constructor 'com.khopan.win32.struct.holder.BITMAPINFO()' not found!");
			return true;
		}

		jobject bitmapInfoInstance = environment->NewObject(bitmapInfoClass, bitmapInfoConstructor);
		result = bitmapInfoInstance;
	}
	
	jclass bitmapInfoClass = environment->GetObjectClass(result);
	std::string className;
	if(getClassName(environment, className, bitmapInfoClass)) return true;
	jfieldID bmiHeaderField = environment->GetFieldID(bitmapInfoClass, "bmiHeader", "Lcom/khopan/win32/struct/holder/BITMAPINFOHEADER;");

	if(!bmiHeaderField) {
		throwException(environment, "FieldNotFoundException", "Field 'bmiHeader' of type 'com.khopan.win32.struct.holder.BITMAPINFOHEADER' not found in class '" + className + "'!");
		return true;
	}

	jfieldID bmiColorsField = environment->GetFieldID(bitmapInfoClass, "bmiColors", "[Lcom/khopan/win32/struct/holder/RGBQUAD;");

	if(!bmiColorsField) {
		throwException(environment, "FieldNotFoundException", "Array field 'bmiColors' of type 'com.khopan.win32.struct.holder.RGBQUAD[]' not found in class '" + className + "'!");
		return true;
	}

	jobject bmiHeaderInstance = NULL;
	if(getJavaBITMAPINFOHEADER(environment, bmiHeaderInstance, input.bmiHeader)) return true;
	environment->SetObjectField(result, bmiHeaderField, bmiHeaderInstance);
	jclass rgbQuadClass = environment->FindClass("com/khopan/win32/struct/holder/RGBQUAD");

	if(!rgbQuadClass) {
		throwException(environment, "ClassNotFoundException", "Class 'com.khopan.win32.struct.holder.RGBQUAD' not found!");
		return true;
	}

	int length = 1;
	jobjectArray array = environment->NewObjectArray(length, rgbQuadClass, NULL);

	for(int i = 0; i < length; i++) {
		jobject rgbQuadInstance = NULL;
		if(getJavaRGBQUAD(environment, rgbQuadInstance, input.bmiColors[i])) return true;
		environment->SetObjectArrayElement(array, i, rgbQuadInstance);
	}

	environment->SetObjectField(result, bmiColorsField, array);
	return false;
}
