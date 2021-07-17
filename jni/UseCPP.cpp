 #include<jni.h>
 #include <iostream>
 #include "hello_UseCPP.h"

 using namespace std;

 JNIEXPORT void JNICALL Java_hello_UseCPP_sayHello(JNIEnv *env, jobject obj){
     cout<<"Hello word!"<<endl;
 }