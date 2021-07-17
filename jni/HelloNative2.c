 #include<jni.h>
 #include <stdio.h>
 #include "hello_HelloNative2.h"

JNIEXPORT void JNICALL Java_hello_HelloNative2_printHello2(JNIEnv *env, jclass thisObj) {
    printf("Hello World2!\n");
    return;
 }