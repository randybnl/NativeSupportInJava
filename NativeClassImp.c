#include <jni.h>
#include "NativeClass.h"
#include <stdio.h>

JNIEXPORT void JNICALL Java_NativeClass_printText(JNIEnv *env, jobject obj) {
	printf("It works, this function is called from a native method in C!\n");
	return;
}
