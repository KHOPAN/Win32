#include <vector>
#include <Windows.h>
#include "com_khopan_win32_Win32.h"
#include "javahelper.h"
#include "procedure.h"

std::vector<WindowEntry*> entryList;

void addEntry(WindowEntry* entry) {
	entryList.push_back(entry);
}

WindowEntry* getEntry(const std::string& className) {
	for(int i = 0; i < entryList.size(); i++) {
		WindowEntry* entry = entryList.at(i);

		if(!lstrcmpA(entry->className.c_str(), className.c_str())) {
			return entry;
		}
	}

	return NULL;
}

LRESULT processMessage(WindowEntry* entry, HWND window, UINT message, WPARAM wparam, LPARAM lparam) {
	LRESULT result = 0;
	JavaVM* virtualMachine = entry->virtualMachine;
	JNIEnv* environment;
	JavaVMAttachArgs args;
	args.version = JNI_VERSION_21;
	args.name = NULL;
	args.group = NULL;
	virtualMachine->AttachCurrentThread(reinterpret_cast<void**>(&environment), &args);
	jobject callbackInstance = entry->instance;
	jmethodID callbackMethodIdentifier = entry->identifier;
	jint messageInt = message;
	jlong wparamLong = wparam;
	jlong lparamLong = lparam;
	jobject hwndInstance = NULL;
	if(getJavaMemoryAddress(environment, hwndInstance, reinterpret_cast<long long>(window), "com/khopan/win32/struct/memory/HWND")) return DefWindowProcA(window, message, wparam, lparam);
	result = environment->CallLongMethod(callbackInstance, callbackMethodIdentifier, hwndInstance, messageInt, wparamLong, lparamLong);
	virtualMachine->DetachCurrentThread();
	return result;
}

LRESULT CALLBACK WindowProcedure(HWND window, UINT message, WPARAM wparam, LPARAM lparam) {
	WindowEntry* entry = reinterpret_cast<WindowEntry*>(GetWindowLongPtrA(window, GWLP_USERDATA));

	if(entry) {
		return processMessage(entry, window, message, wparam, lparam);
	}

	if(message == WM_CREATE) {
		CREATESTRUCT* createStruct = reinterpret_cast<CREATESTRUCT*>(lparam);
		entry = reinterpret_cast<WindowEntry*>(createStruct->lpCreateParams);
		SetWindowLongPtrA(window, GWLP_USERDATA, reinterpret_cast<long long>(entry));
		return processMessage(entry, window, message, wparam, lparam);
	}

	return DefWindowProcA(window, message, wparam, lparam);
}
