/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_khopan_win32_Win32 */

#ifndef _Included_com_khopan_win32_Win32
#define _Included_com_khopan_win32_Win32
#ifdef __cplusplus
extern "C" {
#endif
	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    AbortSystemShutdown
	 * Signature: (Ljava/lang/String;)I
	 */
	JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_AbortSystemShutdown
	(JNIEnv*, jclass, jstring);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    BeginPaint
	 * Signature: (Lcom/khopan/win32/struct/memory/HWND;Lcom/khopan/win32/struct/holder/PAINTSTRUCT;)Lcom/khopan/win32/struct/memory/HDC;
	 */
	JNIEXPORT jobject JNICALL Java_com_khopan_win32_Win32_BeginPaint
	(JNIEnv*, jclass, jobject, jobject);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    BitBlt
	 * Signature: (Lcom/khopan/win32/struct/memory/HDC;IIIILcom/khopan/win32/struct/memory/HDC;IIJ)I
	 */
	JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_BitBlt
	(JNIEnv*, jclass, jobject, jint, jint, jint, jint, jobject, jint, jint, jlong);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    CoInitialize
	 * Signature: (Lcom/khopan/win32/struct/memory/LPVOID;)J
	 */
	JNIEXPORT jlong JNICALL Java_com_khopan_win32_Win32_CoInitialize
	(JNIEnv*, jclass, jobject);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    CoInitializeEx
	 * Signature: (Lcom/khopan/win32/struct/memory/LPVOID;J)J
	 */
	JNIEXPORT jlong JNICALL Java_com_khopan_win32_Win32_CoInitializeEx
	(JNIEnv*, jclass, jobject, jlong);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    CoTaskMemFree
	 * Signature: (Lcom/khopan/win32/struct/MemoryStruct;)V
	 */
	JNIEXPORT void JNICALL Java_com_khopan_win32_Win32_CoTaskMemFree
	(JNIEnv*, jclass, jobject);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    CoUninitialize
	 * Signature: ()V
	 */
	JNIEXPORT void JNICALL Java_com_khopan_win32_Win32_CoUninitialize
	(JNIEnv*, jclass);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    CreateCompatibleBitmap
	 * Signature: (Lcom/khopan/win32/struct/memory/HDC;II)Lcom/khopan/win32/struct/memory/HBITMAP;
	 */
	JNIEXPORT jobject JNICALL Java_com_khopan_win32_Win32_CreateCompatibleBitmap
	(JNIEnv*, jclass, jobject, jint, jint);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    CreateCompatibleDC
	 * Signature: (Lcom/khopan/win32/struct/memory/HDC;)Lcom/khopan/win32/struct/memory/HDC;
	 */
	JNIEXPORT jobject JNICALL Java_com_khopan_win32_Win32_CreateCompatibleDC
	(JNIEnv*, jclass, jobject);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    CreateFontIndirect
	 * Signature: (Lcom/khopan/win32/struct/holder/LOGFONT;)Lcom/khopan/win32/struct/memory/HFONT;
	 */
	JNIEXPORT jobject JNICALL Java_com_khopan_win32_Win32_CreateFontIndirect
	(JNIEnv*, jclass, jobject);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    CreatePen
	 * Signature: (IIJ)Lcom/khopan/win32/struct/memory/HPEN;
	 */
	JNIEXPORT jobject JNICALL Java_com_khopan_win32_Win32_CreatePen
	(JNIEnv*, jclass, jint, jint, jlong);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    CreateSolidBrush
	 * Signature: (J)Lcom/khopan/win32/struct/memory/HBRUSH;
	 */
	JNIEXPORT jobject JNICALL Java_com_khopan_win32_Win32_CreateSolidBrush
	(JNIEnv*, jclass, jlong);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    CreateWindowEx
	 * Signature: (JLjava/lang/String;Ljava/lang/String;JIIIILcom/khopan/win32/struct/memory/HWND;Lcom/khopan/win32/struct/memory/HMENU;Lcom/khopan/win32/struct/memory/HINSTANCE;Lcom/khopan/win32/struct/memory/LPVOID;)Lcom/khopan/win32/struct/memory/HWND;
	 */
	JNIEXPORT jobject JNICALL Java_com_khopan_win32_Win32_CreateWindowEx
	(JNIEnv*, jclass, jlong, jstring, jstring, jlong, jint, jint, jint, jint, jobject, jobject, jobject, jobject);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    DefWindowProc
	 * Signature: (Lcom/khopan/win32/struct/memory/HWND;IJJ)J
	 */
	JNIEXPORT jlong JNICALL Java_com_khopan_win32_Win32_DefWindowProc
	(JNIEnv*, jclass, jobject, jint, jlong, jlong);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    DeleteDC
	 * Signature: (Lcom/khopan/win32/struct/memory/HDC;)I
	 */
	JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_DeleteDC
	(JNIEnv*, jclass, jobject);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    DeleteObject
	 * Signature: (J)I
	 */
	JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_DeleteObject
	(JNIEnv*, jclass, jlong);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    DestroyWindow
	 * Signature: (Lcom/khopan/win32/struct/memory/HWND;)I
	 */
	JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_DestroyWindow
	(JNIEnv*, jclass, jobject);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    DispatchMessage
	 * Signature: (Lcom/khopan/win32/struct/holder/MSG;)J
	 */
	JNIEXPORT jlong JNICALL Java_com_khopan_win32_Win32_DispatchMessage
	(JNIEnv*, jclass, jobject);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    DrawText
	 * Signature: (Lcom/khopan/win32/struct/memory/HDC;Ljava/lang/String;ILcom/khopan/win32/struct/holder/RECT;I)I
	 */
	JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_DrawText
	(JNIEnv*, jclass, jobject, jstring, jint, jobject, jint);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    EndPaint
	 * Signature: (Lcom/khopan/win32/struct/memory/HWND;Lcom/khopan/win32/struct/holder/PAINTSTRUCT;)I
	 */
	JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_EndPaint
	(JNIEnv*, jclass, jobject, jobject);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    ExitWindowsEx
	 * Signature: (IJ)I
	 */
	JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_ExitWindowsEx
	(JNIEnv*, jclass, jint, jlong);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    FillRect
	 * Signature: (Lcom/khopan/win32/struct/memory/HDC;Lcom/khopan/win32/struct/holder/RECT;Lcom/khopan/win32/struct/memory/HBRUSH;)I
	 */
	JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_FillRect
	(JNIEnv*, jclass, jobject, jobject, jobject);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    GetClientRect
	 * Signature: (Lcom/khopan/win32/struct/memory/HWND;Lcom/khopan/win32/struct/holder/RECT;)I
	 */
	JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_GetClientRect
	(JNIEnv*, jclass, jobject, jobject);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    GetLastError
	 * Signature: ()J
	 */
	JNIEXPORT jlong JNICALL Java_com_khopan_win32_Win32_GetLastError
	(JNIEnv*, jclass);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    GetMessage
	 * Signature: (Lcom/khopan/win32/struct/holder/MSG;Lcom/khopan/win32/struct/memory/HWND;II)I
	 */
	JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_GetMessage
	(JNIEnv*, jclass, jobject, jobject, jint, jint);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    GetModuleHandle
	 * Signature: (Ljava/lang/String;)Lcom/khopan/win32/struct/memory/HINSTANCE;
	 */
	JNIEXPORT jobject JNICALL Java_com_khopan_win32_Win32_GetModuleHandle
	(JNIEnv*, jclass, jstring);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    GetStockObject
	 * Signature: (I)J
	 */
	JNIEXPORT jlong JNICALL Java_com_khopan_win32_Win32_GetStockObject
	(JNIEnv*, jclass, jint);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    GetSystemMetrics
	 * Signature: (I)I
	 */
	JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_GetSystemMetrics
	(JNIEnv*, jclass, jint);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    InitiateSystemShutdown
	 * Signature: (Ljava/lang/String;Ljava/lang/String;JZZ)I
	 */
	JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_InitiateSystemShutdown
	(JNIEnv*, jclass, jstring, jstring, jlong, jboolean, jboolean);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    InitiateSystemShutdownEx
	 * Signature: (Ljava/lang/String;Ljava/lang/String;JZZJ)I
	 */
	JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_InitiateSystemShutdownEx
	(JNIEnv*, jclass, jstring, jstring, jlong, jboolean, jboolean, jlong);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    InvalidateRect
	 * Signature: (Lcom/khopan/win32/struct/memory/HWND;Lcom/khopan/win32/struct/holder/RECT;Z)I
	 */
	JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_InvalidateRect
	(JNIEnv*, jclass, jobject, jobject, jboolean);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    LoadCursor
	 * Signature: (Lcom/khopan/win32/struct/memory/HINSTANCE;I)Lcom/khopan/win32/struct/memory/HCURSOR;
	 */
	JNIEXPORT jobject JNICALL Java_com_khopan_win32_Win32_LoadCursor
	(JNIEnv*, jclass, jobject, jint);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    MessageBox
	 * Signature: (Lcom/khopan/win32/struct/memory/HWND;Ljava/lang/String;Ljava/lang/String;J)I
	 */
	JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_MessageBox
	(JNIEnv*, jclass, jobject, jstring, jstring, jlong);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    MFCreateAttributes
	 * Signature: (Lcom/khopan/win32/mediafoundation/IMFAttributes;I)J
	 */
	JNIEXPORT jlong JNICALL Java_com_khopan_win32_Win32_MFCreateAttributes
	(JNIEnv*, jclass, jobject, jint);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    MFShutdown
	 * Signature: ()J
	 */
	JNIEXPORT jlong JNICALL Java_com_khopan_win32_Win32_MFShutdown
	(JNIEnv*, jclass);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    MFStartup
	 * Signature: (JJ)J
	 */
	JNIEXPORT jlong JNICALL Java_com_khopan_win32_Win32_MFStartup
	(JNIEnv*, jclass, jlong, jlong);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    Polygon
	 * Signature: (Lcom/khopan/win32/struct/memory/HDC;[Lcom/khopan/win32/struct/holder/POINT;I)I
	 */
	JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_Polygon
	(JNIEnv*, jclass, jobject, jobjectArray, jint);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    PostQuitMessage
	 * Signature: (I)V
	 */
	JNIEXPORT void JNICALL Java_com_khopan_win32_Win32_PostQuitMessage
	(JNIEnv*, jclass, jint);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    RegisterClass
	 * Signature: (Lcom/khopan/win32/struct/holder/WNDCLASS;)I
	 */
	JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_RegisterClass
	(JNIEnv*, jclass, jobject);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    SystemParametersInfo
	 * Signature: (IIJI)I
	 */
	JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_SystemParametersInfo
	(JNIEnv*, jclass, jint, jint, jlong, jint);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    SelectObject
	 * Signature: (Lcom/khopan/win32/struct/memory/HDC;J)J
	 */
	JNIEXPORT jlong JNICALL Java_com_khopan_win32_Win32_SelectObject
	(JNIEnv*, jclass, jobject, jlong);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    SendMessage
	 * Signature: (Lcom/khopan/win32/struct/memory/HWND;IJJ)J
	 */
	JNIEXPORT jlong JNICALL Java_com_khopan_win32_Win32_SendMessage
	(JNIEnv*, jclass, jobject, jint, jlong, jlong);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    SetBkColor
	 * Signature: (Lcom/khopan/win32/struct/memory/HDC;J)J
	 */
	JNIEXPORT jlong JNICALL Java_com_khopan_win32_Win32_SetBkColor
	(JNIEnv*, jclass, jobject, jlong);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    SetDCBrushColor
	 * Signature: (Lcom/khopan/win32/struct/memory/HDC;J)J
	 */
	JNIEXPORT jlong JNICALL Java_com_khopan_win32_Win32_SetDCBrushColor
	(JNIEnv*, jclass, jobject, jlong);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    SetDCPenColor
	 * Signature: (Lcom/khopan/win32/struct/memory/HDC;J)J
	 */
	JNIEXPORT jlong JNICALL Java_com_khopan_win32_Win32_SetDCPenColor
	(JNIEnv*, jclass, jobject, jlong);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    SetDIBitsToDevice
	 * Signature: (Lcom/khopan/win32/struct/memory/HDC;IIJJIIII[ILcom/khopan/win32/struct/holder/BITMAPINFO;I)I
	 */
	JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_SetDIBitsToDevice
	(JNIEnv*, jclass, jobject, jint, jint, jlong, jlong, jint, jint, jint, jint, jintArray, jobject, jint);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    SetTextColor
	 * Signature: (Lcom/khopan/win32/struct/memory/HDC;J)J
	 */
	JNIEXPORT jlong JNICALL Java_com_khopan_win32_Win32_SetTextColor
	(JNIEnv*, jclass, jobject, jlong);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    SetWindowPos
	 * Signature: (Lcom/khopan/win32/struct/memory/HWND;Lcom/khopan/win32/struct/memory/HWND;IIIII)I
	 */
	JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_SetWindowPos
	(JNIEnv*, jclass, jobject, jobject, jint, jint, jint, jint, jint);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    ShowWindow
	 * Signature: (Lcom/khopan/win32/struct/memory/HWND;I)I
	 */
	JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_ShowWindow
	(JNIEnv*, jclass, jobject, jint);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    TranslateMessage
	 * Signature: (Lcom/khopan/win32/struct/holder/MSG;)I
	 */
	JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_TranslateMessage
	(JNIEnv*, jclass, jobject);

	/*
	 * Class:     com_khopan_win32_Win32
	 * Method:    FormatErrorMessage
	 * Signature: (J)Ljava/lang/String;
	 */
	JNIEXPORT jstring JNICALL Java_com_khopan_win32_Win32_FormatErrorMessage
	(JNIEnv*, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
