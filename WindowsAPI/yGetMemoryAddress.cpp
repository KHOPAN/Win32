#include <string>
#include <Windows.h>
#include <jni.h>
#include "com_khopan_win32_BareMetal.h"
#include "javahelper.h"

long long nonClientMetrics(JNIEnv*, jobject);

JNIEXPORT jlong JNICALL Java_com_khopan_win32_BareMetal_GetMemoryAddress(JNIEnv* environment, jclass bareMetal, jobject object) {
	jclass nonClientMetricsClass = environment->FindClass("com/khopan/win32/struct/holder/NONCLIENTMETRICS");

	if(!nonClientMetricsClass) {
		throwException(environment, "ClassNotFoundException", "Class 'com.khopan.win32.struct.holder.NONCLIENTMETRICS' not found!");
		return true;
	}

	if(environment->IsInstanceOf(object, nonClientMetricsClass)) {
		return nonClientMetrics(environment, object);
	}

	jclass objectClass = environment->GetObjectClass(object);
	std::string className;
	if(getClassName(environment, className, objectClass)) return NULL;
	throwException(environment, "UnsupportedConversionException", "Conversion from '" + className + "' to 'long' is not supported!");
	return NULL;
}

long long nonClientMetrics(JNIEnv* environment, jobject nonClientMetrics) {
	NONCLIENTMETRICSA metrics = {0};
	if(getNativeNONCLIENTMETRICS(environment, metrics, nonClientMetrics)) return NULL;
	metrics.cbSize = sizeof(metrics);
	NONCLIENTMETRICSA* pointer = static_cast<NONCLIENTMETRICSA*>(malloc(sizeof(NONCLIENTMETRICSA)));
	*pointer = metrics;
	return reinterpret_cast<long long>(pointer);
}
