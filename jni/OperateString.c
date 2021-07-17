 #include<jni.h>
 #include <stdio.h>
 #include "operation_OperateString.h"

 JNIEXPORT jstring JNICALL Java_operation_OperateString_stringCopy(JNIEnv *env, jobject cls, jstring j_str){
    const char *c_str = NULL;
    char buff[128] = {0};
    jboolean isCopy;
    c_str = (*env)->GetStringUTFChars(env, j_str, &isCopy);
    printf("isCopy:%d\n",isCopy);
    if(c_str == NULL)
    {
        return NULL;
    }
    printf("C_str: %s \n", c_str);
    sprintf(buff, "hello %s", c_str);
    (*env)->ReleaseStringUTFChars(env, j_str, c_str);
    return (*env)->NewStringUTF(env,buff);
 }

 JNIEXPORT jstring JNICALL Java_operation_OperateString_sayHello(JNIEnv *env, jobject cls, jstring j_str){
    const jchar* c_str= NULL;
    char buff[128] = "hello";
    char* pBuff = buff + 6;
    c_str = (*env)->GetStringCritical(env,j_str,NULL);
    if (c_str == NULL)
    {
        return NULL;
    }
    while(*c_str)
    {
        *pBuff++ = *c_str++;
    }
    (*env)->ReleaseStringCritical(env,j_str,c_str);
    return (*env)->NewStringUTF(env,buff);
 }

 JNIEXPORT jstring JNICALL Java_operation_OperateString_sayHello2(JNIEnv *env, jobject cls, jstring j_str){
    jsize len = (*env)->GetStringLength(env,j_str);
    printf("str_len:%d\n",len);
    char buff[128] = "hello";
    char* pBuff = buff + 6;
    (*env)->GetStringUTFRegion(env,j_str,0,len,pBuff);
    return (*env)->NewStringUTF(env,buff);
 }

