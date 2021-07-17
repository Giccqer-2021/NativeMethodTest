 #include<jni.h>
 #include <iostream>
 #include "sort_AdvancedSort.h"

 using namespace std;

void mer(jint data[],int low,int mid,int high)
{
    int i,p,k;
    int *tmp;
    tmp = (int *)malloc((high-low+1)*sizeof(int));
    if(!tmp)
    {
        exit(0);
    }
    k=0;
    for(i=low,p=mid; i<mid&&p<=high;)
    {
        if(data[i]<data[p])
        {
            tmp[k++]=data[i++];
        }
        else
        {
            tmp[k++]=data[p++];
        }
    }
    while(i<mid)
    {
        tmp[k++]=data[i++];
    }
    while(p<=high)
    {
        tmp[k++]=data[p++];
    }
    i=low;
    p=0;
    while(p<k)
    {
        data[i++]=tmp[p++];
    }
    free(tmp);
}
void mergesort(jint data[],int s,int t)
{
    int m;
    if(s<t)
    {
        m=(s+t)/2;
        mergesort(data,s,m);
        mergesort(data,m+1,t);
        mer(data,s,m+1,t);
    }
}

JNIEXPORT void JNICALL Java_sort_AdvancedSort_mergeSort(JNIEnv *env, jobject obj, jintArray arr_){
    int n = env->GetArrayLength(arr_);
    jint * data = env->GetIntArrayElements(arr_,0);
    mergesort(data,0,n-1);
    env->ReleaseIntArrayElements(arr_, data, 0);
 }

int part(jint data[],int low,int high)
{
    int i,j,pivot;
    pivot = data[low];
    i=low;
    j=high;
    while(i<j)
    {
        while(i<j&&data[j]>=pivot)
        {
            j--;
        }
        data[i]=data[j];
        while(i<j&&data[i]<=pivot)
        {
            i++;
        }
        data[j]=data[i];
    }
    data[i]=pivot;
    return i;
}
void quicksort(jint data[],int low,int high)
{
    if(low < high)
    {
        int loc = part(data,low,high);
        quicksort(data,low,loc-1);
        quicksort(data,loc+1,high);
    }
}

 JNIEXPORT void JNICALL Java_sort_AdvancedSort_quickSort(JNIEnv *env, jobject obj, jintArray arr_){
    int n = env->GetArrayLength(arr_);
    jint * data = env->GetIntArrayElements(arr_,0);
    quicksort(data,0,n-1);
    env->ReleaseIntArrayElements(arr_, data, 0);
 }

void insertSort(jint a[],int n,int sp)
{
    int i,j,t;
    for(i=0; i<n-sp; i++)
    {
        for(j=i; j<n-sp; j+=sp)
        {
            if(a[j]>a[j+sp])
            {
                t=a[j];
                a[j]=a[j+sp];
                a[j+sp]=t;
            }
        }
    }
}
void shellsort(jint a[],int n,int d[],int dn)
{
    int i;
    for(i=0; i<dn; i++)
    {
        insertSort(a,n,d[i]);
    }
}

 JNIEXPORT void JNICALL Java_sort_AdvancedSort_shellSort(JNIEnv *env, jobject obj, jintArray arr_){
    int n = env->GetArrayLength(arr_);
    jint * data = env->GetIntArrayElements(arr_,0);
    int d[]= {5,3,1};
    shellsort(data,n,d,3);
    env->ReleaseIntArrayElements(arr_, data, 0);
 }