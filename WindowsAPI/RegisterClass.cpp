#include <Windows.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"
#include "javahelper.h"
#include "procedure.h"

JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_RegisterClass(JNIEnv* environment, jclass win32, jobject lpWndClass) {
	if(!lpWndClass) return 0;
	WNDCLASSA windowClass = {0};
	jclass wndclassClass = environment->GetObjectClass(lpWndClass);
	std::string className;
	if(getClassName(environment, className, wndclassClass)) return NULL;
	jfieldID styleField = environment->GetFieldID(wndclassClass, "style", "I");

	if(!styleField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'style' not found in class '" + className + "'!");
		return NULL;
	}

	jfieldID lpfnWndProcField = environment->GetFieldID(wndclassClass, "lpfnWndProc", "Lcom/khopan/win32/struct/function/WNDPROC;");

	if(!lpfnWndProcField) {
		throwException(environment, "FieldNotFoundException", "Field 'lpfnWndProc' of type 'com.khopan.win32.struct.function.WNDPROC' not found in class '" + className + "'!");
		return NULL;
	}

	jfieldID cbClsExtraField = environment->GetFieldID(wndclassClass, "cbClsExtra", "I");

	if(!cbClsExtraField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'cbClsExtra' not found in class '" + className + "'!");
		return NULL;
	}

	jfieldID cbWndExtraField = environment->GetFieldID(wndclassClass, "cbWndExtra", "I");

	if(!cbWndExtraField) {
		throwException(environment, "FieldNotFoundException", "Integer field 'cbWndExtra' not found in class '" + className + "'!");
		return NULL;
	}

	jfieldID hInstanceField = environment->GetFieldID(wndclassClass, "hInstance", "Lcom/khopan/win32/struct/memory/HINSTANCE;");

	if(!hInstanceField) {
		throwException(environment, "FieldNotFoundException", "Field 'hInstance' of type 'com.khopan.win32.struct.memory.HINSTANCE' not found in class '" + className + "'!");
		return NULL;
	}

	jfieldID hIconField = environment->GetFieldID(wndclassClass, "hIcon", "Lcom/khopan/win32/struct/memory/HICON;");

	if(!hIconField) {
		throwException(environment, "FieldNotFoundException", "Field 'hIcon' of type 'com.khopan.win32.struct.memory.HICON' not found in class '" + className + "'!");
		return NULL;
	}

	jfieldID hCursorField = environment->GetFieldID(wndclassClass, "hCursor", "Lcom/khopan/win32/struct/memory/HCURSOR;");

	if(!hCursorField) {
		throwException(environment, "FieldNotFoundException", "Field 'hCursor' of type 'com.khopan.win32.struct.memory.HCURSOR' not found in class '" + className + "'!");
		return NULL;
	}

	jfieldID hbrBackgroundField = environment->GetFieldID(wndclassClass, "hbrBackground", "Lcom/khopan/win32/struct/memory/HBRUSH;");

	if(!hbrBackgroundField) {
		throwException(environment, "FieldNotFoundException", "Field 'hbrBackground' of type 'com.khopan.win32.struct.memory.HBRUSH' not found in class '" + className + "'!");
		return NULL;
	}

	jfieldID lpszMenuNameField = environment->GetFieldID(wndclassClass, "lpszMenuName", "Ljava/lang/String;");

	if(!lpszMenuNameField) {
		throwException(environment, "FieldNotFoundException", "String field 'lpszMenuName' not found in class '" + className + "'!");
		return NULL;
	}

	jfieldID lpszClassNameField = environment->GetFieldID(wndclassClass, "lpszClassName", "Ljava/lang/String;");

	if(!lpszClassNameField) {
		throwException(environment, "FieldNotFoundException", "String field 'lpszClassName' not found in class '" + className + "'!");
		return NULL;
	}

	windowClass.style = environment->GetIntField(lpWndClass, styleField);
	windowClass.cbClsExtra = environment->GetIntField(lpWndClass, cbClsExtraField);
	windowClass.cbWndExtra = environment->GetIntField(lpWndClass, cbWndExtraField);
	jobject hInstance = environment->GetObjectField(lpWndClass, hInstanceField);
	long long hInstanceAddress = NULL;
	if(hInstance && getNativeMemoryAddress(environment, hInstanceAddress, hInstance)) return NULL;
	windowClass.hInstance = reinterpret_cast<HINSTANCE>(hInstanceAddress);
	jobject hIcon = environment->GetObjectField(lpWndClass, hIconField);
	long long hIconAddress = NULL;
	if(hIcon && getNativeMemoryAddress(environment, hIconAddress, hIcon)) return NULL;
	windowClass.hIcon = reinterpret_cast<HICON>(hIconAddress);
	jobject hCursor = environment->GetObjectField(lpWndClass, hCursorField);
	long long hCursorAddress = NULL;
	if(hCursor && getNativeMemoryAddress(environment, hCursorAddress, hCursor)) return NULL;
	windowClass.hCursor = reinterpret_cast<HCURSOR>(hCursorAddress);
	jobject hbrBackground = environment->GetObjectField(lpWndClass, hbrBackgroundField);
	long long hbrBackgroundAddress = NULL;
	if(hbrBackground && getNativeMemoryAddress(environment, hbrBackgroundAddress, hbrBackground)) return NULL;
	windowClass.hbrBackground = reinterpret_cast<HBRUSH>(hbrBackgroundAddress);
	jstring lpszMenuName = static_cast<jstring>(environment->GetObjectField(lpWndClass, lpszMenuNameField));

	if(lpszMenuName) {
		const char* menuName = environment->GetStringUTFChars(lpszMenuName, NULL);
		windowClass.lpszMenuName = menuName;
	}

	jstring lpszClassName = static_cast<jstring>(environment->GetObjectField(lpWndClass, lpszClassNameField));

	if(lpszClassName) {
		const char* className = environment->GetStringUTFChars(lpszClassName, NULL);
		windowClass.lpszClassName = className;
		jobject callback = environment->GetObjectField(lpWndClass, lpfnWndProcField);

		if(callback) {
			jclass callbackClass = environment->GetObjectClass(callback);
			jmethodID identifier = environment->GetMethodID(callbackClass, "windowProcedure", "(Lcom/khopan/win32/struct/memory/HWND;IJJ)J");

			if(identifier) {
				JavaVM* virtualMachine;
				environment->GetJavaVM(&virtualMachine);
				WindowEntry* entry = new WindowEntry();
				entry->className = windowClass.lpszClassName;
				entry->virtualMachine = virtualMachine;
				entry->instance = environment->NewGlobalRef(callback);
				entry->identifier = identifier;
				addEntry(entry);
				windowClass.lpfnWndProc = WindowProcedure;
			}
		}
	}

	return RegisterClassA(&windowClass);
}
