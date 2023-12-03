#include <string>
#include <Windows.h>
#include <jni.h>
#include "javahelper.h"

bool getNativePAINTSTRUCT(JNIEnv* environment, PAINTSTRUCT& result, jobject input) {
	if(input == NULL) return true;
	jclass paintStructClass = environment->GetObjectClass(input);
	std::string className;
	if(getClassName(environment, className, paintStructClass)) return NULL;
	jfieldID hdcField = environment->GetFieldID(paintStructClass, "hdc", "Lcom/khopan/win32/struct/memory/HDC;");

	if(!hdcField) {
		throwException(environment, "FieldNotFoundException", "Field 'hdc' of type 'com.khopan.win32.struct.memory.HDC' not found in class '" + className + "'!");
		return true;
	}

	jfieldID fEraseField = environment->GetFieldID(paintStructClass, "fErase", "Z");

	if(!fEraseField) {
		throwException(environment, "FieldNotFoundException", "Boolean field 'fErase' not found in class '" + className + "'!");
		return true;
	}

	jfieldID rcPaintField = environment->GetFieldID(paintStructClass, "rcPaint", "Lcom/khopan/win32/struct/holder/RECT;");
	
	if(!rcPaintField) {
		throwException(environment, "FieldNotFoundException", "Field 'rcPaint' of type 'com.khopan.win32.struct.holder.RECT' not found in class '" + className + '!');
		return true;
	}

	jfieldID fRestoreField = environment->GetFieldID(paintStructClass, "fRestore", "Z");

	if(!fRestoreField) {
		throwException(environment, "FieldNotFoundException", "Boolean field 'fRestore' not found in class '" + className + "'!");
		return true;
	}

	jfieldID fIncUpdateField = environment->GetFieldID(paintStructClass, "fIncUpdate", "Z");

	if(!fIncUpdateField) {
		throwException(environment, "FieldNotFoundException", "Boolean field 'fIncUpdate' not found in class '" + className + "'");
		return true;
	}

	jfieldID rgbReservedField = environment->GetFieldID(paintStructClass, "rgbReserved", "[B");

	if(!rgbReservedField) {
		throwException(environment, "FieldNotFoundException", "Byte array field 'rgbReserved' not found in class '" + className + "'!");
		return true;
	}

	jobject hdcInstance = environment->GetObjectField(input, hdcField);
	long long hdcAddress = NULL;
	if(hdcInstance && getNativeMemoryAddress(environment, hdcAddress, hdcInstance)) return true;
	result.hdc = reinterpret_cast<HDC>(hdcAddress);
	result.fErase = environment->GetBooleanField(input, fEraseField);
	jobject rectInstance = environment->GetObjectField(input, rcPaintField);

	if(rectInstance) {
		if(getNativeRECT(environment, result.rcPaint, rectInstance)) return true;
	} else {
		result.rcPaint.left = 0;
		result.rcPaint.top = 0;
		result.rcPaint.right = 0;
		result.rcPaint.bottom = 0;
	}

	result.fRestore = environment->GetBooleanField(input, fRestoreField);
	result.fIncUpdate = environment->GetBooleanField(input, fIncUpdateField);
	jobject rgbReservedArray = environment->GetObjectField(input, rgbReservedField);

	if(!rgbReservedArray) {
		return false;
	}

	jbyteArray byteArray = static_cast<jbyteArray>(rgbReservedArray);
	int length = environment->GetArrayLength(byteArray);

	if(length < 32) {
		throwException(environment, "ArrayTooShortException", "Byte array field 'rgbReserved' in class '" + className + "' must have the size greater than or equal to 32!");
		return true;
	}

	jbyte* bytes = environment->GetByteArrayElements(byteArray, NULL);

	for(int i = 0; i < 32; i++) {
		result.rgbReserved[i] = static_cast<unsigned char>(bytes[i]);
	}

	environment->ReleaseByteArrayElements(byteArray, bytes, NULL);
	return false;
}

bool getJavaPAINTSTRUCT(JNIEnv* environment, jobject& result, PAINTSTRUCT input) {
	if(!result) {
		jclass paintStructClass = environment->FindClass("com/khopan/win32/struct/holder/PAINTSTRUCT");

		if(!paintStructClass) {
			throwException(environment, "ClassNotFoundException", "Class 'com.khopan.win32.struct.holder.PAINTSTRUCT' not found!");
			return true;
		}

		jmethodID paintStructConstructor = environment->GetMethodID(paintStructClass, "<init>", "()V");

		if(!paintStructConstructor) {
			throwException(environment, "ConstructorNotFoundException", "Constructor 'com.khopan.win32.struct.holder.PAINTSTRUCT()' not found!");
			return true;
		}

		jobject paintStructInstance = environment->NewObject(paintStructClass, paintStructConstructor);
		result = paintStructInstance;
	}

	jclass paintStructClass = environment->GetObjectClass(result);
	std::string className;
	if(getClassName(environment, className, paintStructClass)) return NULL;
	jfieldID hdcField = environment->GetFieldID(paintStructClass, "hdc", "Lcom/khopan/win32/struct/memory/HDC;");

	if(!hdcField) {
		throwException(environment, "FieldNotFoundException", "Field 'hdc' of type 'com.khopan.win32.struct.memory.HDC' not found in class '" + className + "'!");
		return true;
	}

	jfieldID fEraseField = environment->GetFieldID(paintStructClass, "fErase", "Z");

	if(!fEraseField) {
		throwException(environment, "FieldNotFoundException", "Boolean field 'fErase' not found in class '" + className + "'!");
		return true;
	}

	jfieldID rcPaintField = environment->GetFieldID(paintStructClass, "rcPaint", "Lcom/khopan/win32/struct/holder/RECT;");

	if(!rcPaintField) {
		throwException(environment, "FieldNotFoundException", "Field 'rcPaint' of type 'com.khopan.win32.struct.holder.RECT' not found in class '" + className + '!');
		return true;
	}

	jfieldID fRestoreField = environment->GetFieldID(paintStructClass, "fRestore", "Z");

	if(!fRestoreField) {
		throwException(environment, "FieldNotFoundException", "Boolean field 'fRestore' not found in class '" + className + "'!");
		return true;
	}

	jfieldID fIncUpdateField = environment->GetFieldID(paintStructClass, "fIncUpdate", "Z");

	if(!fIncUpdateField) {
		throwException(environment, "FieldNotFoundException", "Boolean field 'fIncUpdate' not found in class '" + className + "'");
		return true;
	}

	jfieldID rgbReservedField = environment->GetFieldID(paintStructClass, "rgbReserved", "[B");

	if(!rgbReservedField) {
		throwException(environment, "FieldNotFoundException", "Byte array field 'rgbReserved' not found in class '" + className + "'!");
		return true;
	}

	jbyte bytes[32];

	for(int i = 0; i < 32; i++) {
		bytes[i] = input.rgbReserved[i];
	}

	jbyteArray byteArray = environment->NewByteArray(32);
	environment->SetByteArrayRegion(byteArray, 0, 32, bytes);
	environment->SetObjectField(result, rgbReservedField, byteArray);
	jobject rectInstance = NULL;
	if(getJavaRECT(environment, rectInstance, input.rcPaint)) return true;
	environment->SetObjectField(result, rcPaintField, rectInstance);
	jobject hdcInstance = NULL;
	if(getJavaMemoryAddress(environment, hdcInstance, reinterpret_cast<long long>(input.hdc), "com/khopan/win32/struct/memory/HDC")) return true;
	environment->SetObjectField(result, hdcField, hdcInstance);
	environment->SetBooleanField(result, fEraseField, static_cast<unsigned char>(input.fErase));
	environment->SetBooleanField(result, fRestoreField, static_cast<unsigned char>(input.fRestore));
	environment->SetBooleanField(result, fIncUpdateField, static_cast<unsigned char>(input.fIncUpdate));
	return false;
}
