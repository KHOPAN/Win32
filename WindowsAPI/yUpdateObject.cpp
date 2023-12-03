#include <Windows.h>
#include <jni.h>
#include "com_khopan_win32_BareMetal.h"
#include "javahelper.h"

void nonClientMetrics(JNIEnv*, jlong, jobject&);

JNIEXPORT void JNICALL Java_com_khopan_win32_BareMetal_UpdateObject(JNIEnv* environment, jclass bareMetal, jlong memoryAddress, jobject object) {
	jclass nonClientMetricsClass = environment->FindClass("com/khopan/win32/struct/holder/NONCLIENTMETRICS");

	if(!nonClientMetricsClass) {
		throwException(environment, "ClassNotFoundException", "Class 'com.khopan.win32.struct.holder.NONCLIENTMETRICS' not found!");
		return;
	}

	if(environment->IsInstanceOf(object, nonClientMetricsClass)) {
		nonClientMetrics(environment, memoryAddress, object);
		return;
	}

	jclass objectClass = environment->GetObjectClass(object);
	std::string className;
	if(getClassName(environment, className, objectClass)) return;
	throwException(environment, "UnsupportedConversionException", "Conversion from '" + className + "' to 'long' is not supported!");
}

void nonClientMetrics(JNIEnv* environment, jlong memoryAddress, jobject& object) {
	NONCLIENTMETRICSA* metricsPointer = reinterpret_cast<NONCLIENTMETRICSA*>(memoryAddress);
	NONCLIENTMETRICSA metrics = *metricsPointer;
	getJavaNONCLIENTMETRICS(environment, object, metrics);
	free(metricsPointer);
}
