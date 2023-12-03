#include <Windows.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"
#include "javahelper.h"

JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_MessageBox(JNIEnv* environment, jclass win32, jobject hWnd, jstring lpText, jstring lpCaption, jlong uType) {
	long long address = NULL;
	if(hWnd && getNativeMemoryAddress(environment, address, hWnd)) return NULL;
	HWND window = reinterpret_cast<HWND>(address);
	const wchar_t* text = lpText ? reinterpret_cast<const wchar_t*>(environment->GetStringChars(lpText, NULL)) : NULL;
	const wchar_t* caption = lpCaption ? reinterpret_cast<const wchar_t*>(environment->GetStringChars(lpCaption, NULL)) : NULL;
	jint result = MessageBoxW(window, text, caption, static_cast<UINT>(uType));
	if(lpText) environment->ReleaseStringChars(lpText, reinterpret_cast<const jchar*>(text));
	if(lpCaption) environment->ReleaseStringChars(lpCaption, reinterpret_cast<const jchar*>(caption));
	return result;
}
