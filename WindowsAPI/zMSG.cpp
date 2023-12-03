#include <Windows.h>
#include <jni.h>
#include "javahelper.h"

bool getNativeMSG(JNIEnv* environment, MSG& result, jobject input) {
	if(!input) return true;
	jclass msgClass = environment->GetObjectClass(input);
	std::string className;
	if(getClassName(environment, className, msgClass)) return NULL;
	jfieldID hwndField = environment->GetFieldID(msgClass, "hwnd", "Lcom/khopan/win32/struct/memory/HWND;");

	if(!hwndField) {
		throwException(environment, "FieldNotFoundException", "Field 'hwnd' of type 'com.khopan.win32.struct.memory.HWND' not found in class '" + className + "'!");
		return true;
	}

	jfieldID messageField = environment->GetFieldID(msgClass, "message", "I");

	if(!messageField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'message' not found in class '" + className + "'!");
		return true;
	}

	jfieldID wParamField = environment->GetFieldID(msgClass, "wParam", "J");

	if(!wParamField) {
		throwException(environment, "FieldNotFoundException", "Long field 'wParam' not found in class '" + className + "'!");
		return true;
	}

	jfieldID lParamField = environment->GetFieldID(msgClass, "lParam", "J");

	if(!lParamField) {
		throwException(environment, "FieldNotFoundException", "Long field 'lParam' not found in class '" + className + "'!");
		return true;
	}

	jfieldID timeField = environment->GetFieldID(msgClass, "time", "J");

	if(!timeField) {
		throwException(environment, "FieldNotFoundException", "Long field 'time' not found in class '" + className + "'!");
		return true;
	}

	jfieldID ptField = environment->GetFieldID(msgClass, "pt", "Lcom/khopan/win32/struct/holder/POINT;");

	if(!ptField) {
		throwException(environment, "FieldNotFoundException", "Field 'pt' of type 'com.khopan.win32.struct.holder.POINT' not found in class '" + className + "'!");
		return true;
	}

	jobject ptInstance = environment->GetObjectField(input, ptField);
	if(ptInstance && getNativePOINT(environment, result.pt, ptInstance)) return true;
	jobject hwndInstance = environment->GetObjectField(input, hwndField);
	long long hwndAddress = NULL;
	if(hwndInstance && getNativeMemoryAddress(environment, hwndAddress, hwndInstance)) return true;
	result.hwnd = hwndAddress == NULL ? NULL : reinterpret_cast<HWND>(hwndAddress);
	result.message = environment->GetIntField(input, messageField);
	result.wParam = environment->GetLongField(input, wParamField);
	result.lParam = environment->GetLongField(input, lParamField);
	result.time = static_cast<DWORD>(environment->GetLongField(input, timeField));
	return false;
}

bool getJavaMSG(JNIEnv* environment, jobject& result, MSG input) {
	if(!result) {
		jclass msgClass = environment->FindClass("com/khopan/win32/struct/holder/MSG");
		
		if(!msgClass) {
			throwException(environment, "ClassNotFoundException", "Class 'com.khopan.win32.struct.holder.MSG' not found!");
			return true;
		}

		jmethodID msgConstructor = environment->GetMethodID(msgClass, "<init>", "()V");

		if(!msgConstructor) {
			throwException(environment, "ConstructorNotFoundException", "Constructor 'com.khopan.win32.struct.holder.MSG()' not found!");
			return true;
		}

		jobject msgInstance = environment->NewObject(msgClass, msgConstructor);
		result = msgInstance;
	}

	jclass msgClass = environment->GetObjectClass(result);
	std::string className;
	if(getClassName(environment, className, msgClass)) return NULL;
	jfieldID hwndField = environment->GetFieldID(msgClass, "hwnd", "Lcom/khopan/win32/struct/memory/HWND;");

	if(!hwndField) {
		throwException(environment, "FieldNotFoundException", "Field 'hwnd' of type 'com.khopan.win32.struct.memory.HWND' not found in class '" + className + "'!");
		return true;
	}

	jfieldID messageField = environment->GetFieldID(msgClass, "message", "I");

	if(!messageField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'message' not found in class '" + className + "'!");
		return true;
	}

	jfieldID wParamField = environment->GetFieldID(msgClass, "wParam", "J");

	if(!wParamField) {
		throwException(environment, "FieldNotFoundException", "Long field 'wParam' not found in class '" + className + "'!");
		return true;
	}

	jfieldID lParamField = environment->GetFieldID(msgClass, "lParam", "J");

	if(!lParamField) {
		throwException(environment, "FieldNotFoundException", "Long field 'lParam' not found in class '" + className + "'!");
		return true;
	}

	jfieldID timeField = environment->GetFieldID(msgClass, "time", "J");

	if(!timeField) {
		throwException(environment, "FieldNotFoundException", "Long field 'time' not found in class '" + className + "'!");
		return true;
	}

	jfieldID ptField = environment->GetFieldID(msgClass, "pt", "Lcom/khopan/win32/struct/holder/POINT;");

	if(!ptField) {
		throwException(environment, "FieldNotFoundException", "Field 'pt' of type 'com.khopan.win32.struct.holder.POINT' not found in class '" + className + "'!");
		return true;
	}

	jobject pointInstance = NULL;
	if(getJavaPOINT(environment, pointInstance, input.pt)) return true;
	environment->SetObjectField(result, ptField, pointInstance);
	jobject hwndInstance = NULL;
	if(getJavaMemoryAddress(environment, hwndInstance, reinterpret_cast<long long>(input.hwnd), "com/khopan/win32/struct/memory/HWND")) return true;
	environment->SetObjectField(result, hwndField, hwndInstance);
	environment->SetIntField(result, messageField, input.message);
	environment->SetLongField(result, wParamField, input.wParam);
	environment->SetLongField(result, lParamField, input.lParam);
	environment->SetLongField(result, timeField, input.time);
	return false;
}
