#include <jni.h>
#include "javahelper.h"

extern "C" {
	jint JNICALL JNI_OnLoad(JavaVM* virtualMachine, void* reserved) {
		JNIEnv* environment;
		JavaVMAttachArgs args;
		args.version = JNI_VERSION_21;
		args.name = NULL;
		args.group = NULL;
		virtualMachine->AttachCurrentThread((void**) &environment, &args);
		jclass win32Class = environment->FindClass("com/khopan/win32/Win32");

		if(!win32Class) {
			throwException(environment, "ClassNotFoundException", "Class 'com.khopan.win32.Win32' not found!");
			virtualMachine->DetachCurrentThread();
			virtualMachine->DestroyJavaVM();
			return NULL;
		}

		jfieldID versionField = environment->GetStaticFieldID(win32Class, "VERSION", "Ljava/lang/String;");

		if(!versionField) {
			throwException(environment, "FieldNotFoundException", "Static String field 'VERSION' not found in class 'com.khopan.win32.Win32'!");
			virtualMachine->DetachCurrentThread();
			virtualMachine->DestroyJavaVM();
			return NULL;
		}

		jstring versionString = static_cast<jstring>(environment->GetStaticObjectField(win32Class, versionField));

		if(!versionString) {
			throwException(environment, "NullFieldException", "String Field 'VERSION' in class 'com.khopan.win32.Win32' cannot be null!");
			virtualMachine->DetachCurrentThread();
			virtualMachine->DestroyJavaVM();
			return NULL;
		}

		std::string version = environment->GetStringUTFChars(versionString, NULL);

		if(version != "1.0.0") {
			throwException(environment, "UnsupportedVersionException", "Win32 version: '" + version + "' is not supported!");
			virtualMachine->DetachCurrentThread();
			virtualMachine->DestroyJavaVM();
			return NULL;
		}

		virtualMachine->DetachCurrentThread();
		return JNI_VERSION_21;
	}
}
