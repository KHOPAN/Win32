#include <string>
#include <Windows.h>
#include <jni.h>
#include "javahelper.h"

bool getNativeNONCLIENTMETRICS(JNIEnv* environment, NONCLIENTMETRICSA& result, jobject input) {
	if(!input) return true;
	jclass nonClientMetricsClass = environment->GetObjectClass(input);
	std::string className;
	if(getClassName(environment, className, nonClientMetricsClass)) return true;
	jfieldID cbSizeField = environment->GetFieldID(nonClientMetricsClass, "cbSize", "I");

	if(!cbSizeField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'cbSize' not found in class '" + className + "'!");
		return true;
	}

	jfieldID iBorderWidthField = environment->GetFieldID(nonClientMetricsClass, "iBorderWidth", "I");

	if(!iBorderWidthField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'iBorderWidth' not found in class '" + className + "'!");
		return true;
	}

	jfieldID iScrollWidthField = environment->GetFieldID(nonClientMetricsClass, "iScrollWidth", "I");

	if(!iScrollWidthField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'iScrollWidth' not found in class '" + className + "'!");
		return true;
	}

	jfieldID iScrollHeightField = environment->GetFieldID(nonClientMetricsClass, "iScrollHeight", "I");

	if(!iScrollHeightField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'iScrollHeight' not found in class '" + className + "'!");
		return true;
	}

	jfieldID iCaptionWidthField = environment->GetFieldID(nonClientMetricsClass, "iCaptionWidth", "I");

	if(!iCaptionWidthField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'iCaptionWidth' not found in class '" + className + "'!");
		return true;
	}

	jfieldID iCaptionHeightField = environment->GetFieldID(nonClientMetricsClass, "iCaptionHeight", "I");

	if(!iCaptionHeightField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'iCaptionHeight' not found in class '" + className + "'!");
		return true;
	}

	jfieldID lfCaptionFontField = environment->GetFieldID(nonClientMetricsClass, "lfCaptionFont", "Lcom/khopan/win32/struct/holder/LOGFONT;");

	if(!lfCaptionFontField) {
		throwException(environment, "FieldNotFoundException", "Field 'lfCaptionFont' of type 'com.khopan.win32.struct.holder.LOGFONT' not found in class '" + className + "'!");
		return true;
	}

	jfieldID iSmCaptionWidthField = environment->GetFieldID(nonClientMetricsClass, "iSmCaptionWidth", "I");

	if(!iSmCaptionWidthField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'iSmCaptionWidth' not found in class '" + className + "'!");
		return true;
	}

	jfieldID iSmCaptionHeightField = environment->GetFieldID(nonClientMetricsClass, "iSmCaptionHeight", "I");

	if(!iSmCaptionHeightField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'iSmCaptionHeight' not found in class '" + className + "'!");
		return true;
	}

	jfieldID lfSmCaptionFontField = environment->GetFieldID(nonClientMetricsClass, "lfSmCaptionFont", "Lcom/khopan/win32/struct/holder/LOGFONT;");

	if(!lfSmCaptionFontField) {
		throwException(environment, "FieldNotFoundException", "Field 'lfSmCaptionFont' of type 'com.khopan.win32.struct.holder.LOGFONT' not found in class '" + className + "'!");
		return true;
	}

	jfieldID iMenuWidthField = environment->GetFieldID(nonClientMetricsClass, "iMenuWidth", "I");

	if(!iMenuWidthField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'iMenuWidth' not found in class '" + className + "'!");
		return true;
	}

	jfieldID iMenuHeightField = environment->GetFieldID(nonClientMetricsClass, "iMenuHeight", "I");

	if(!iMenuHeightField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'iMenuHeight' not found in class '" + className + "'!");
		return true;
	}

	jfieldID lfMenuFontField = environment->GetFieldID(nonClientMetricsClass, "lfMenuFont", "Lcom/khopan/win32/struct/holder/LOGFONT;");

	if(!lfMenuFontField) {
		throwException(environment, "FieldNotFoundException", "Field 'lfMenuFont' of type 'com.khopan.win32.struct.holder.LOGFONT' not found in class '" + className + "'!");
		return true;
	}

	jfieldID lfStatusFontField = environment->GetFieldID(nonClientMetricsClass, "lfStatusFont", "Lcom/khopan/win32/struct/holder/LOGFONT;");

	if(!lfStatusFontField) {
		throwException(environment, "FieldNotFoundException", "Field 'lfStatusFont' of type 'com.khopan.win32.struct.holder.LOGFONT' not found in class '" + className + "'!");
		return true;
	}

	jfieldID lfMessageFontField = environment->GetFieldID(nonClientMetricsClass, "lfMessageFont", "Lcom/khopan/win32/struct/holder/LOGFONT;");

	if(!lfMessageFontField) {
		throwException(environment, "FieldNotFoundException", "Field 'lfMessageFont' of type 'com.khopan.win32.struct.holder.LOGFONT' not found in class '" + className + "'!");
		return true;
	}

	jfieldID iPaddedBorderWidthField = environment->GetFieldID(nonClientMetricsClass, "iPaddedBorderWidth", "I");

	if(!iPaddedBorderWidthField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'iPaddedBorderWidth' not found in class '" + className + "'!");
		return true;
	}

	result.cbSize = environment->GetIntField(input, cbSizeField);
	result.iBorderWidth = environment->GetIntField(input, iBorderWidthField);
	result.iScrollWidth = environment->GetIntField(input, iScrollWidthField);
	result.iScrollHeight = environment->GetIntField(input, iScrollHeightField);
	result.iCaptionWidth = environment->GetIntField(input, iCaptionWidthField);
	result.iCaptionHeight = environment->GetIntField(input, iCaptionHeightField);
	jobject lfCaptionFontInstance = environment->GetObjectField(input, lfCaptionFontField);
	if(lfCaptionFontInstance && getNativeLOGFONT(environment, result.lfCaptionFont, lfCaptionFontInstance)) return true;
	result.iSmCaptionWidth = environment->GetIntField(input, iSmCaptionWidthField);
	result.iSmCaptionHeight = environment->GetIntField(input, iSmCaptionHeightField);
	jobject lfSmCaptionFontInstance = environment->GetObjectField(input, lfSmCaptionFontField);
	if(lfSmCaptionFontInstance && getNativeLOGFONT(environment, result.lfSmCaptionFont, lfSmCaptionFontInstance)) return true;
	result.iMenuWidth = environment->GetIntField(input, iMenuWidthField);
	result.iMenuHeight = environment->GetIntField(input, iMenuHeightField);
	jobject lfMenuFontInstance = environment->GetObjectField(input, lfMenuFontField);
	if(lfMenuFontInstance && getNativeLOGFONT(environment, result.lfMenuFont, lfMenuFontInstance)) return true;
	jobject lfStatusFontInstance = environment->GetObjectField(input, lfStatusFontField);
	if(lfStatusFontInstance && getNativeLOGFONT(environment, result.lfStatusFont, lfStatusFontInstance)) return true;
	jobject lfMessageFontInstance = environment->GetObjectField(input, lfMessageFontField);
	if(lfMessageFontInstance && getNativeLOGFONT(environment, result.lfMessageFont, lfMessageFontInstance)) return true;
	result.iPaddedBorderWidth = environment->GetIntField(input, iPaddedBorderWidthField);
	return false;
}

bool getJavaNONCLIENTMETRICS(JNIEnv* environment, jobject& result, NONCLIENTMETRICSA input) {
	if(!result) {
		jclass nonClientMetricsClass = environment->FindClass("com/khopan/win32/struct/holder/NONCLIENTMETRICS");
	
		if(!nonClientMetricsClass) {
			throwException(environment, "ClassNotFoundException", "Class 'com.khopan.win32.struct.holder.NONCLIENTMETRICS' not found!");
			return true;
		}

		jmethodID nonClientMetricsConstructor = environment->GetMethodID(nonClientMetricsClass, "<init>", "()V");

		if(!nonClientMetricsConstructor) {
			throwException(environment, "ConstructorNotFoundException", "Constructor 'com.khopan.win32.struct.holder.NONCLIENTMETRICS()' not found!");
			return true;
		}
	
		jobject nonClientMetricsInstance = environment->NewObject(nonClientMetricsClass, nonClientMetricsConstructor);
		result = nonClientMetricsInstance;
	}

	jclass nonClientMetricsClass = environment->GetObjectClass(result);
	std::string className;
	if(getClassName(environment, className, nonClientMetricsClass)) return true;
	jfieldID cbSizeField = environment->GetFieldID(nonClientMetricsClass, "cbSize", "I");

	if(!cbSizeField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'cbSize' not found in class '" + className + "'!");
		return true;
	}

	jfieldID iBorderWidthField = environment->GetFieldID(nonClientMetricsClass, "iBorderWidth", "I");

	if(!iBorderWidthField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'iBorderWidth' not found in class '" + className + "'!");
		return true;
	}

	jfieldID iScrollWidthField = environment->GetFieldID(nonClientMetricsClass, "iScrollWidth", "I");

	if(!iScrollWidthField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'iScrollWidth' not found in class '" + className + "'!");
		return true;
	}

	jfieldID iScrollHeightField = environment->GetFieldID(nonClientMetricsClass, "iScrollHeight", "I");

	if(!iScrollHeightField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'iScrollHeight' not found in class '" + className + "'!");
		return true;
	}

	jfieldID iCaptionWidthField = environment->GetFieldID(nonClientMetricsClass, "iCaptionWidth", "I");

	if(!iCaptionWidthField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'iCaptionWidth' not found in class '" + className + "'!");
		return true;
	}

	jfieldID iCaptionHeightField = environment->GetFieldID(nonClientMetricsClass, "iCaptionHeight", "I");

	if(!iCaptionHeightField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'iCaptionHeight' not found in class '" + className + "'!");
		return true;
	}

	jfieldID lfCaptionFontField = environment->GetFieldID(nonClientMetricsClass, "lfCaptionFont", "Lcom/khopan/win32/struct/holder/LOGFONT;");

	if(!lfCaptionFontField) {
		throwException(environment, "FieldNotFoundException", "Field 'lfCaptionFont' of type 'com.khopan.win32.struct.holder.LOGFONT' not found in class '" + className + "'!");
		return true;
	}

	jfieldID iSmCaptionWidthField = environment->GetFieldID(nonClientMetricsClass, "iSmCaptionWidth", "I");

	if(!iSmCaptionWidthField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'iSmCaptionWidth' not found in class '" + className + "'!");
		return true;
	}

	jfieldID iSmCaptionHeightField = environment->GetFieldID(nonClientMetricsClass, "iSmCaptionHeight", "I");

	if(!iSmCaptionHeightField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'iSmCaptionHeight' not found in class '" + className + "'!");
		return true;
	}

	jfieldID lfSmCaptionFontField = environment->GetFieldID(nonClientMetricsClass, "lfSmCaptionFont", "Lcom/khopan/win32/struct/holder/LOGFONT;");

	if(!lfSmCaptionFontField) {
		throwException(environment, "FieldNotFoundException", "Field 'lfSmCaptionFont' of type 'com.khopan.win32.struct.holder.LOGFONT' not found in class '" + className + "'!");
		return true;
	}

	jfieldID iMenuWidthField = environment->GetFieldID(nonClientMetricsClass, "iMenuWidth", "I");

	if(!iMenuWidthField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'iMenuWidth' not found in class '" + className + "'!");
		return true;
	}

	jfieldID iMenuHeightField = environment->GetFieldID(nonClientMetricsClass, "iMenuHeight", "I");

	if(!iMenuHeightField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'iMenuHeight' not found in class '" + className + "'!");
		return true;
	}

	jfieldID lfMenuFontField = environment->GetFieldID(nonClientMetricsClass, "lfMenuFont", "Lcom/khopan/win32/struct/holder/LOGFONT;");

	if(!lfMenuFontField) {
		throwException(environment, "FieldNotFoundException", "Field 'lfMenuFont' of type 'com.khopan.win32.struct.holder.LOGFONT' not found in class '" + className + "'!");
		return true;
	}

	jfieldID lfStatusFontField = environment->GetFieldID(nonClientMetricsClass, "lfStatusFont", "Lcom/khopan/win32/struct/holder/LOGFONT;");

	if(!lfStatusFontField) {
		throwException(environment, "FieldNotFoundException", "Field 'lfStatusFont' of type 'com.khopan.win32.struct.holder.LOGFONT' not found in class '" + className + "'!");
		return true;
	}

	jfieldID lfMessageFontField = environment->GetFieldID(nonClientMetricsClass, "lfMessageFont", "Lcom/khopan/win32/struct/holder/LOGFONT;");

	if(!lfMessageFontField) {
		throwException(environment, "FieldNotFoundException", "Field 'lfMessageFont' of type 'com.khopan.win32.struct.holder.LOGFONT' not found in class '" + className + "'!");
		return true;
	}

	jfieldID iPaddedBorderWidthField = environment->GetFieldID(nonClientMetricsClass, "iPaddedBorderWidth", "I");

	if(!iPaddedBorderWidthField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'iPaddedBorderWidth' not found in class '" + className + "'!");
		return true;
	}

	environment->SetIntField(result, cbSizeField, input.cbSize);
	environment->SetIntField(result, iBorderWidthField, input.iBorderWidth);
	environment->SetIntField(result, iScrollWidthField, input.iScrollWidth);
	environment->SetIntField(result, iScrollHeightField, input.iScrollHeight);
	environment->SetIntField(result, iCaptionWidthField, input.iCaptionWidth);
	environment->SetIntField(result, iCaptionHeightField, input.iCaptionHeight);
	jobject lfCaptionFontInstance = NULL;
	if(getJavaLOGFONT(environment, lfCaptionFontInstance, input.lfCaptionFont)) return true;
	environment->SetObjectField(result, lfCaptionFontField, lfCaptionFontInstance);
	environment->SetIntField(result, iSmCaptionWidthField, input.iSmCaptionWidth);
	environment->SetIntField(result, iSmCaptionHeightField, input.iSmCaptionHeight);
	jobject lfSmCaptionFontInstance = NULL;
	if(getJavaLOGFONT(environment, lfSmCaptionFontInstance, input.lfSmCaptionFont)) return true;
	environment->SetObjectField(result, lfSmCaptionFontField, lfSmCaptionFontInstance);
	environment->SetIntField(result, iMenuWidthField, input.iMenuWidth);
	environment->SetIntField(result, iMenuHeightField, input.iMenuHeight);
	jobject lfMenuFontInstance = NULL;
	if(getJavaLOGFONT(environment, lfMenuFontInstance, input.lfMenuFont)) return true;
	environment->SetObjectField(result, lfMenuFontField, lfMenuFontInstance);
	jobject lfStatusFontInstance = NULL;
	if(getJavaLOGFONT(environment, lfStatusFontInstance, input.lfStatusFont)) return true;
	environment->SetObjectField(result, lfStatusFontField, lfStatusFontInstance);
	jobject lfMessageFontInstance = NULL;
	if(getJavaLOGFONT(environment, lfMessageFontInstance, input.lfMessageFont)) return true;
	environment->SetObjectField(result, lfMessageFontField, lfMessageFontInstance);
	environment->SetIntField(result, iPaddedBorderWidthField, input.iPaddedBorderWidth);
	return false;
}
