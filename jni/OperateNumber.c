 #include<jni.h>
 #include <stdio.h>
 #include "operation_OperateNumber.h"

 JNIEXPORT jint JNICALL Java_operation_OperateNumber_numberAdd(JNIEnv *env, jobject obj, jint a, jint b){
    int c = a*10;
    int d = b*100;
    return c+d;
 }

JNIEXPORT void JNICALL Java_operation_OperateNumber_testIntArray(JNIEnv *env, jobject instance, jintArray array_){
    jint * intArray = (*env)->GetIntArrayElements(env,array_,NULL);
    int len = (*env)->GetArrayLength(env,array_);
    printf("len:%d\n",len);
    for(int i = 0; i < len;i++){
        intArray[i] = intArray[i] * 10;
        jint item = intArray[i];
        printf("item[%d]:%d  ",i,item);
    }
    (*env)->ReleaseIntArrayElements(env,array_, intArray, 0);
}

