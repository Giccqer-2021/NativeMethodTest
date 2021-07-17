 #include<jni.h>
 #include <stdio.h>
 #include "hello_HelloNative.h"

JNIEXPORT void JNICALL Java_hello_HelloNative_printHello(JNIEnv *env, jclass thisObj) {
    printf("Hello World!\n");
    return;
 }