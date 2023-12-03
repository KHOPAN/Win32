#include <string>
#include <Windows.h>
#include <jni.h>
#include "javahelper.h"

bool getNativeLOGFONT(JNIEnv* environment, LOGFONTA& result, jobject input) {
	if(!input) return true;
	jclass logFontClass = environment->GetObjectClass(input);
	std::string className;
	if(getClassName(environment, className, logFontClass)) return true;
	jfieldID lfHeightField = environment->GetFieldID(logFontClass, "lfHeight", "I");

	if(!lfHeightField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'lfHeight' not found in class '" + className + "'!");
		return true;
	}

	jfieldID lfWidthField = environment->GetFieldID(logFontClass, "lfWidth", "I");

	if(!lfWidthField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'lfWidth' not found in class '" + className + "'!");
		return true;
	}

	jfieldID lfEscapementField = environment->GetFieldID(logFontClass, "lfEscapement", "I");

	if(!lfEscapementField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'lfEscapement' not found in class '" + className + "'!");
		return true;
	}

	jfieldID lfOrientationField = environment->GetFieldID(logFontClass, "lfOrientation", "I");

	if(!lfOrientationField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'lfOrientation' not found in class '" + className + "'!");
		return true;
	}

	jfieldID lfWeightField = environment->GetFieldID(logFontClass, "lfWeight", "I");

	if(!lfWeightField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'lfWeight' not found in class '" + className + "'!");
		return true;
	}

	jfieldID lfItalicField = environment->GetFieldID(logFontClass, "lfItalic", "B");

	if(!lfItalicField) {
		throwException(environment, "FieldNotFoundException", "Byte field 'lfItalic' not found in class '" + className + "'!");
		return true;
	}

	jfieldID lfUnderlineField = environment->GetFieldID(logFontClass, "lfUnderline", "B");

	if(!lfUnderlineField) {
		throwException(environment, "FieldNotFoundException", "Byte field 'lfUnderline' not found in class '" + className + "'!");
		return true;
	}

	jfieldID lfStrikeOutField = environment->GetFieldID(logFontClass, "lfStrikeOut", "B");

	if(!lfStrikeOutField) {
		throwException(environment, "FieldNotFoundException", "Byte field 'lfStrikeOut' not found in class '" + className + "'!");
		return true;
	}

	jfieldID lfCharSetField = environment->GetFieldID(logFontClass, "lfCharSet", "B");

	if(!lfCharSetField) {
		throwException(environment, "FieldNotFoundException", "Byte field 'lfCharSet' not found in class '" + className + "'!");
		return true;
	}

	jfieldID lfOutPrecisionField = environment->GetFieldID(logFontClass, "lfOutPrecision", "B");

	if(!lfOutPrecisionField) {
		throwException(environment, "FieldNotFoundException", "Byte field 'lfOutPrecision' not found in class '" + className + "'!");
		return true;
	}

	jfieldID lfClipPrecisionField = environment->GetFieldID(logFontClass, "lfClipPrecision", "B");

	if(!lfClipPrecisionField) {
		throwException(environment, "FieldNotFoundException", "Byte field 'lfClipPrecision' not found in class '" + className + "'!");
		return true;
	}

	jfieldID lfQualityField = environment->GetFieldID(logFontClass, "lfQuality", "B");

	if(!lfQualityField) {
		throwException(environment, "FieldNotFoundException", "Byte field 'lfQuality' not found in class '" + className + "'!");
		return true;
	}

	jfieldID lfPitchAndFamilyField = environment->GetFieldID(logFontClass, "lfPitchAndFamily", "B");

	if(!lfPitchAndFamilyField) {
		throwException(environment, "FieldNotFoundException", "Byte field 'lfPitchAndFamily' not found in class '" + className + "'!");
		return true;
	}

	jfieldID lfFaceNameField = environment->GetFieldID(logFontClass, "lfFaceName", "[C");

	if(!lfFaceNameField) {
		throwException(environment, "FieldNotFoundException", "Character array field 'lfFaceName' not found in class '" + className + "'!");
		return true;
	}

	result.lfHeight = environment->GetIntField(input, lfHeightField);
	result.lfWidth = environment->GetIntField(input, lfWidthField);
	result.lfEscapement = environment->GetIntField(input, lfEscapementField);
	result.lfOrientation = environment->GetIntField(input, lfOrientationField);
	result.lfWeight = environment->GetIntField(input, lfWeightField);
	result.lfItalic = environment->GetByteField(input, lfItalicField);
	result.lfUnderline = environment->GetByteField(input, lfUnderlineField);
	result.lfStrikeOut = environment->GetByteField(input, lfStrikeOutField);
	result.lfCharSet = environment->GetByteField(input, lfCharSetField);
	result.lfOutPrecision = environment->GetByteField(input, lfOutPrecisionField);
	result.lfClipPrecision = environment->GetByteField(input, lfClipPrecisionField);
	result.lfQuality = environment->GetByteField(input, lfQualityField);
	result.lfPitchAndFamily = environment->GetByteField(input, lfPitchAndFamilyField);
	jcharArray array = static_cast<jcharArray>(environment->GetObjectField(input, lfFaceNameField));
	
	if(environment->GetArrayLength(array) < LF_FACESIZE) {
		std::string sizeString = std::to_string(LF_FACESIZE);
		throwException(environment, "ArrayTooShortException", "Character array field 'lfFaceName' in class '" + className + "' must have the size greater than or equal to " + sizeString + '!');
		return true;
	}

	jchar* values = environment->GetCharArrayElements(array, NULL);

	for(int i = 0; i < LF_FACESIZE; i++) {
		result.lfFaceName[i] = static_cast<CHAR>(values[i]);
	}

	environment->ReleaseCharArrayElements(array, values, NULL);
	return false;
}

bool getJavaLOGFONT(JNIEnv* environment, jobject& result, LOGFONTA input) {
	if(!result) {
		jclass logFontClass = environment->FindClass("com/khopan/win32/struct/holder/LOGFONT");

		if(!logFontClass) {
			throwException(environment, "ClassNotFoundException", "Class 'com.khopan.win32.struct.holder.LOGFONT' not found!");
			return true;
		}

		jmethodID logFontConstructor = environment->GetMethodID(logFontClass, "<init>", "()V");

		if(!logFontConstructor) {
			throwException(environment, "ConstructorNotFoundException", "Constructor 'com.khopan.win32.struct.holder.LOGFONT()' not found!");
			return true;
		}

		jobject logFontInstance = environment->NewObject(logFontClass, logFontConstructor);
		result = logFontInstance;
	}

	jclass logFontClass = environment->GetObjectClass(result);
	std::string className;
	if(getClassName(environment, className, logFontClass)) return true;
	jfieldID lfHeightField = environment->GetFieldID(logFontClass, "lfHeight", "I");

	if(!lfHeightField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'lfHeight' not found in class '" + className + "'!");
		return true;
	}

	jfieldID lfWidthField = environment->GetFieldID(logFontClass, "lfWidth", "I");

	if(!lfWidthField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'lfWidth' not found in class '" + className + "'!");
		return true;
	}

	jfieldID lfEscapementField = environment->GetFieldID(logFontClass, "lfEscapement", "I");

	if(!lfEscapementField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'lfEscapement' not found in class '" + className + "'!");
		return true;
	}

	jfieldID lfOrientationField = environment->GetFieldID(logFontClass, "lfOrientation", "I");

	if(!lfOrientationField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'lfOrientation' not found in class '" + className + "'!");
		return true;
	}

	jfieldID lfWeightField = environment->GetFieldID(logFontClass, "lfWeight", "I");

	if(!lfWeightField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'lfWeight' not found in class '" + className + "'!");
		return true;
	}

	jfieldID lfItalicField = environment->GetFieldID(logFontClass, "lfItalic", "B");

	if(!lfItalicField) {
		throwException(environment, "FieldNotFoundException", "Byte field 'lfItalic' not found in class '" + className + "'!");
		return true;
	}

	jfieldID lfUnderlineField = environment->GetFieldID(logFontClass, "lfUnderline", "B");

	if(!lfUnderlineField) {
		throwException(environment, "FieldNotFoundException", "Byte field 'lfUnderline' not found in class '" + className + "'!");
		return true;
	}

	jfieldID lfStrikeOutField = environment->GetFieldID(logFontClass, "lfStrikeOut", "B");

	if(!lfStrikeOutField) {
		throwException(environment, "FieldNotFoundException", "Byte field 'lfStrikeOut' not found in class '" + className + "'!");
		return true;
	}

	jfieldID lfCharSetField = environment->GetFieldID(logFontClass, "lfCharSet", "B");

	if(!lfCharSetField) {
		throwException(environment, "FieldNotFoundException", "Byte field 'lfCharSet' not found in class '" + className + "'!");
		return true;
	}

	jfieldID lfOutPrecisionField = environment->GetFieldID(logFontClass, "lfOutPrecision", "B");

	if(!lfOutPrecisionField) {
		throwException(environment, "FieldNotFoundException", "Byte field 'lfOutPrecision' not found in class '" + className + "'!");
		return true;
	}

	jfieldID lfClipPrecisionField = environment->GetFieldID(logFontClass, "lfClipPrecision", "B");

	if(!lfClipPrecisionField) {
		throwException(environment, "FieldNotFoundException", "Byte field 'lfClipPrecision' not found in class '" + className + "'!");
		return true;
	}

	jfieldID lfQualityField = environment->GetFieldID(logFontClass, "lfQuality", "B");

	if(!lfQualityField) {
		throwException(environment, "FieldNotFoundException", "Byte field 'lfQuality' not found in class '" + className + "'!");
		return true;
	}

	jfieldID lfPitchAndFamilyField = environment->GetFieldID(logFontClass, "lfPitchAndFamily", "B");

	if(!lfPitchAndFamilyField) {
		throwException(environment, "FieldNotFoundException", "Byte field 'lfPitchAndFamily' not found in class '" + className + "'!");
		return true;
	}

	jfieldID lfFaceNameField = environment->GetFieldID(logFontClass, "lfFaceName", "[C");

	if(!lfFaceNameField) {
		throwException(environment, "FieldNotFoundException", "Character array field 'lfFaceName' not found in class '" + className + "'!");
		return true;
	}

	environment->SetIntField(result, lfHeightField, input.lfHeight);
	environment->SetIntField(result, lfWidthField, input.lfWidth);
	environment->SetIntField(result, lfEscapementField, input.lfEscapement);
	environment->SetIntField(result, lfOrientationField, input.lfOrientation);
	environment->SetIntField(result, lfWeightField, input.lfWeight);
	environment->SetByteField(result, lfItalicField, input.lfItalic);
	environment->SetByteField(result, lfUnderlineField, input.lfUnderline);
	environment->SetByteField(result, lfStrikeOutField, input.lfStrikeOut);
	environment->SetByteField(result, lfCharSetField, input.lfCharSet);
	environment->SetByteField(result, lfOutPrecisionField, input.lfOutPrecision);
	environment->SetByteField(result, lfClipPrecisionField, input.lfClipPrecision);
	environment->SetByteField(result, lfQualityField, input.lfQuality);
	environment->SetByteField(result, lfPitchAndFamilyField, input.lfPitchAndFamily);
	jcharArray array = environment->NewCharArray(LF_FACESIZE);
	jchar values[LF_FACESIZE];

	for(int i = 0; i < LF_FACESIZE; i++) {
		values[i] = input.lfFaceName[i];
	}

	environment->SetCharArrayRegion(array, 0, LF_FACESIZE, values);
	environment->SetObjectField(result, lfFaceNameField, array);
	return false;
}
