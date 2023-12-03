#include <Windows.h>
#include <jni.h>
#include "com_khopan_win32_Win32.h"
#include "javahelper.h"

JNIEXPORT jint JNICALL Java_com_khopan_win32_Win32_Polygon(JNIEnv* environment, jclass win32, jobject hdc, jobjectArray apt, jint cpt) {
	long long address = NULL;
	if(hdc && getNativeMemoryAddress(environment, address, hdc)) return NULL;
	HDC context = reinterpret_cast<HDC>(address);
	POINT* pointArray = NULL;

	if(apt) {
		int length = environment->GetArrayLength(apt);
		POINT* points = new POINT[length];

		for(int i = 0; i < length; i++) {
			jobject pointInstance = environment->GetObjectArrayElement(apt, i);
			POINT point = {0};
			if(pointInstance && getNativePOINT(environment, point, pointInstance)) return NULL;
			points[i] = point;
		}

		pointArray = points;
	}

	return Polygon(context, pointArray, cpt);
}
