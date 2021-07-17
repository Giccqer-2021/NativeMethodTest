 #include<jni.h>
 #include <stdio.h>
 #include "sort_NumberSort.h"

 JNIEXPORT void JNICALL Java_sort_NumberSort_DirectInsertion(JNIEnv *env, jobject obj, jintArray arr_){
    int len = (*env)->GetArrayLength(env,arr_);
    jint * array = (*env)->GetIntArrayElements(env,arr_,0);
    int i,j,temp;
    for(i=1; i<len; i++)
    {
        if(array[i] <array[i-1])
        {
            temp = array[i];
            array[i]=array[i-1];
            for(j=i-2; j>=0&&array[j]>temp; j--)
            {
                array[j+1]=array[j];
            }
            array[j+1]=temp;
        }
    }
    (*env)->ReleaseIntArrayElements(env,arr_, array, 0);
 }

 JNIEXPORT void JNICALL Java_sort_NumberSort_SimpleSelection(JNIEnv *env, jobject obj, jintArray arr_){
    int n = (*env)->GetArrayLength(env,arr_);
    jint * data = (*env)->GetIntArrayElements(env,arr_,0);
    int i,j,k,temp;
    for(i=0; i<n-1; i++)
    {
        k=i;
        for(j=i+1; j<n; j++)
        {
            if(data[j]<data[k])
            {
                k=j;
            }
        }
        if(k!=i)
        {
            temp = data[i];
            data[i]=data[k];
            data[k]=temp;
        }
    }
    (*env)->ReleaseIntArrayElements(env,arr_, data, 0);
 }

 JNIEXPORT void JNICALL Java_sort_NumberSort_bubble(JNIEnv *env, jobject obj, jintArray arr_){
    int n = (*env)->GetArrayLength(env,arr_);
    jint * data = (*env)->GetIntArrayElements(env,arr_,0);
    int i,j,temp,tag=1;
    for(i=1; tag&&i<n; i++)
    {
        tag=0;
        for(j=0; j<n-1; j++)
        {
            if(data[j]>data[j+1])
            {
                temp = data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
                tag=1;
            }
        }
    }
    (*env)->ReleaseIntArrayElements(env,arr_, data, 0);
 }