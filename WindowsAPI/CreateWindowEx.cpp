#include <Windows.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"
#include "javahelper.h"
#include "procedure.h"

JNIEXPORT jobject JNICALL Java_com_khopan_win32_Win32_CreateWindowEx(JNIEnv* environment, jclass win32, jlong dwExStyle, jstring lpClassName, jstring lpWindowName, jlong dwStyle, jint X, jint Y, jint nWidth, jint nHeight, jobject hWndParent, jobject hMenu, jobject hInstance, jobject lpParam) {
	const char* className = lpClassName ? environment->GetStringUTFChars(lpClassName, NULL) : NULL;
	WindowEntry* entry = className ? getEntry(className) : NULL;
	const char* windowName = lpWindowName ? environment->GetStringUTFChars(lpWindowName, NULL) : NULL;
	long long parentAddress = NULL;
	if(hWndParent && getNativeMemoryAddress(environment, parentAddress, hWndParent)) return NULL;
	long long menuAddress = NULL;
	if(hMenu && getNativeMemoryAddress(environment, menuAddress, hMenu)) return NULL;
	long long instanceAddress = NULL;
	if(hInstance && getNativeMemoryAddress(environment, instanceAddress, hInstance)) return NULL;
	HWND window = CreateWindowExA(0L, className, windowName, dwStyle, X, Y, nWidth, nHeight, reinterpret_cast<HWND>(parentAddress), reinterpret_cast<HMENU>(menuAddress), reinterpret_cast<HINSTANCE>(instanceAddress), entry);
	jobject result = NULL;
	if(getJavaMemoryAddress(environment, result, reinterpret_cast<long long>(window), "com/khopan/win32/struct/memory/HWND")) return NULL;
	if(lpClassName) environment->ReleaseStringUTFChars(lpClassName, className);
	if(lpWindowName) environment->ReleaseStringUTFChars(lpWindowName, windowName);
	return result;
}
