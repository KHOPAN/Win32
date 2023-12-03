#pragma once

#include <string>
#include <Windows.h>
#include <jni.h>

bool getClassName(JNIEnv*, std::string&, jclass);
void throwException(JNIEnv*, const std::string&, const std::string&);

bool getNativeMemoryAddress(JNIEnv*, long long&, jobject);
bool getJavaMemoryAddress(JNIEnv*, jobject&, long long, const std::string&);

bool getNativePAINTSTRUCT(JNIEnv*, PAINTSTRUCT&, jobject);
bool getJavaPAINTSTRUCT(JNIEnv*, jobject&, PAINTSTRUCT);

bool getNativeMSG(JNIEnv*, MSG&, jobject);
bool getJavaMSG(JNIEnv*, jobject&, MSG);

bool getNativeRECT(JNIEnv*, RECT&, jobject);
bool getJavaRECT(JNIEnv*, jobject&, RECT);

bool getNativeNONCLIENTMETRICS(JNIEnv*, NONCLIENTMETRICSA&, jobject);
bool getJavaNONCLIENTMETRICS(JNIEnv*, jobject&, NONCLIENTMETRICSA);

bool getNativeLOGFONT(JNIEnv*, LOGFONTA&, jobject);
bool getJavaLOGFONT(JNIEnv*, jobject&, LOGFONTA);

bool getNativePOINT(JNIEnv*, POINT&, jobject);
bool getJavaPOINT(JNIEnv*, jobject&, POINT);

bool getNativeBITMAPINFO(JNIEnv*, BITMAPINFO&, jobject);
bool getJavaBITMAPINFO(JNIEnv*, jobject&, BITMAPINFO);

bool getNativeBITMAPINFOHEADER(JNIEnv*, BITMAPINFOHEADER&, jobject);
bool getJavaBITMAPINFOHEADER(JNIEnv*, jobject&, BITMAPINFOHEADER);

bool getNativeRGBQUAD(JNIEnv*, RGBQUAD&, jobject);
bool getJavaRGBQUAD(JNIEnv*, jobject&, RGBQUAD);

bool getNativeGUID(JNIEnv*, GUID&, jobject);
bool getJavaGUID(JNIEnv*, jobject&, GUID);
