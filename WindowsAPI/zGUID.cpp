#include <Windows.h>
#include <jni.h>
#include "javahelper.h"

bool getNativeGUID(JNIEnv* environment, GUID& result, jobject input) {
	if(!input) return true;
	jclass guidClass = environment->GetObjectClass(input);
	std::string className;
	if(getClassName(environment, className, guidClass)) return true;
	jfieldID data1Field = environment->GetFieldID(guidClass, "Data1", "J");

	if(!data1Field) {
		throwException(environment, "FieldNotFoundException", "Long field 'Data1' not found in class '" + className + "'!");
		return true;
	}

	jfieldID data2Field = environment->GetFieldID(guidClass, "Data2", "J");

	if(!data2Field) {
		throwException(environment, "FieldNotFoundException", "Long field 'Data2' not found in class '" + className + "'!");
		return true;
	}

	jfieldID data3Field = environment->GetFieldID(guidClass, "Data3", "J");

	if(!data3Field) {
		throwException(environment, "FieldNotFoundException", "Long field 'Data3' not found in class '" + className + "'!");
		return true;
	}

	jfieldID data40Field = environment->GetFieldID(guidClass, "Data40", "J");

	if(!data40Field) {
		throwException(environment, "FieldNotFoundException", "Long field 'Data40' not found in class '" + className + "'!");
		return true;
	}

	jfieldID data41Field = environment->GetFieldID(guidClass, "Data41", "J");

	if(!data41Field) {
		throwException(environment, "FieldNotFoundException", "Long field 'Data41' not found in class '" + className + "'!");
		return true;
	}

	jfieldID data42Field = environment->GetFieldID(guidClass, "Data42", "J");

	if(!data42Field) {
		throwException(environment, "FieldNotFoundException", "Long field 'Data42' not found in class '" + className + "'!");
		return true;
	}

	jfieldID data43Field = environment->GetFieldID(guidClass, "Data43", "J");

	if(!data43Field) {
		throwException(environment, "FieldNotFoundException", "Long field 'Data43' not found in class '" + className + "'!");
		return true;
	}

	jfieldID data44Field = environment->GetFieldID(guidClass, "Data44", "J");

	if(!data44Field) {
		throwException(environment, "FieldNotFoundException", "Long field 'Data44' not found in class '" + className + "'!");
		return true;
	}

	jfieldID data45Field = environment->GetFieldID(guidClass, "Data45", "J");

	if(!data45Field) {
		throwException(environment, "FieldNotFoundException", "Long field 'Data45' not found in class '" + className + "'!");
		return true;
	}

	jfieldID data46Field = environment->GetFieldID(guidClass, "Data46", "J");

	if(!data46Field) {
		throwException(environment, "FieldNotFoundException", "Long field 'Data46' not found in class '" + className + "'!");
		return true;
	}

	jfieldID data47Field = environment->GetFieldID(guidClass, "Data47", "J");

	if(!data47Field) {
		throwException(environment, "FieldNotFoundException", "Long field 'Data47' not found in class '" + className + "'!");
		return true;
	}

	result.Data1 = static_cast<unsigned long>(environment->GetLongField(input, data1Field));
	result.Data2 = static_cast<unsigned short>(environment->GetLongField(input, data2Field));
	result.Data3 = static_cast<unsigned short>(environment->GetLongField(input, data3Field));
	result.Data4[0] = static_cast<unsigned char>(environment->GetLongField(input, data40Field));
	result.Data4[1] = static_cast<unsigned char>(environment->GetLongField(input, data41Field));
	result.Data4[2] = static_cast<unsigned char>(environment->GetLongField(input, data42Field));
	result.Data4[3] = static_cast<unsigned char>(environment->GetLongField(input, data43Field));
	result.Data4[4] = static_cast<unsigned char>(environment->GetLongField(input, data44Field));
	result.Data4[5] = static_cast<unsigned char>(environment->GetLongField(input, data45Field));
	result.Data4[6] = static_cast<unsigned char>(environment->GetLongField(input, data46Field));
	result.Data4[7] = static_cast<unsigned char>(environment->GetLongField(input, data47Field));
	return false;
}

bool getJavaGUID(JNIEnv* environment, jobject& result, GUID input) {
	if(!result) {
		jclass guidClass = environment->FindClass("com/khopan/win32/mediafoundation/GUID");

		if(!guidClass) {
			throwException(environment, "ClassNotFoundException", "Class 'com.khopan.win32.mediafoundation.GUID' not found!");
			return true;
		}

		jmethodID guidConstructor = environment->GetMethodID(guidClass, "<init>", "()V");

		if(!guidConstructor) {
			throwException(environment, "ConstructorNotFoundException", "Constructor 'com.khopan.win32.mediafoundation.GUID()' not found!");
			return true;
		}

		jobject guidInstance = environment->NewObject(guidClass, guidConstructor);
		result = guidInstance;
	}

	jclass guidClass = environment->GetObjectClass(result);
	std::string className;
	if(getClassName(environment, className, guidClass)) return true;
	jfieldID data1Field = environment->GetFieldID(guidClass, "Data1", "J");

	if(!data1Field) {
		throwException(environment, "FieldNotFoundException", "Long field 'Data1' not found in class '" + className + "'!");
		return true;
	}

	jfieldID data2Field = environment->GetFieldID(guidClass, "Data2", "J");

	if(!data2Field) {
		throwException(environment, "FieldNotFoundException", "Long field 'Data2' not found in class '" + className + "'!");
		return true;
	}

	jfieldID data3Field = environment->GetFieldID(guidClass, "Data3", "J");

	if(!data3Field) {
		throwException(environment, "FieldNotFoundException", "Long field 'Data3' not found in class '" + className + "'!");
		return true;
	}

	jfieldID data40Field = environment->GetFieldID(guidClass, "Data40", "J");

	if(!data40Field) {
		throwException(environment, "FieldNotFoundException", "Long field 'Data40' not found in class '" + className + "'!");
		return true;
	}

	jfieldID data41Field = environment->GetFieldID(guidClass, "Data41", "J");

	if(!data41Field) {
		throwException(environment, "FieldNotFoundException", "Long field 'Data41' not found in class '" + className + "'!");
		return true;
	}

	jfieldID data42Field = environment->GetFieldID(guidClass, "Data42", "J");

	if(!data42Field) {
		throwException(environment, "FieldNotFoundException", "Long field 'Data42' not found in class '" + className + "'!");
		return true;
	}

	jfieldID data43Field = environment->GetFieldID(guidClass, "Data43", "J");

	if(!data43Field) {
		throwException(environment, "FieldNotFoundException", "Long field 'Data43' not found in class '" + className + "'!");
		return true;
	}

	jfieldID data44Field = environment->GetFieldID(guidClass, "Data44", "J");

	if(!data44Field) {
		throwException(environment, "FieldNotFoundException", "Long field 'Data44' not found in class '" + className + "'!");
		return true;
	}

	jfieldID data45Field = environment->GetFieldID(guidClass, "Data45", "J");

	if(!data45Field) {
		throwException(environment, "FieldNotFoundException", "Long field 'Data45' not found in class '" + className + "'!");
		return true;
	}

	jfieldID data46Field = environment->GetFieldID(guidClass, "Data46", "J");

	if(!data46Field) {
		throwException(environment, "FieldNotFoundException", "Long field 'Data46' not found in class '" + className + "'!");
		return true;
	}

	jfieldID data47Field = environment->GetFieldID(guidClass, "Data47", "J");

	if(!data47Field) {
		throwException(environment, "FieldNotFoundException", "Long field 'Data47' not found in class '" + className + "'!");
		return true;
	}

	environment->SetLongField(result, data1Field, input.Data1);
	environment->SetLongField(result, data2Field, input.Data2);
	environment->SetLongField(result, data3Field, input.Data3);
	environment->SetLongField(result, data40Field, input.Data4[0]);
	environment->SetLongField(result, data41Field, input.Data4[1]);
	environment->SetLongField(result, data42Field, input.Data4[2]);
	environment->SetLongField(result, data43Field, input.Data4[3]);
	environment->SetLongField(result, data44Field, input.Data4[4]);
	environment->SetLongField(result, data45Field, input.Data4[5]);
	environment->SetLongField(result, data46Field, input.Data4[6]);
	environment->SetLongField(result, data47Field, input.Data4[7]);
	return false;
}
