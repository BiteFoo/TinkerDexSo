#include <stdio.h>
#include <jni.h>
#include <string.h>
#include <android/log.h>

#define TAG    "soTest" // 这个是自定义的LOG的标识  
#define LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG,TAG,__VA_ARGS__) // 定义LOGD类型  

int sum(int a, int b){

	if(a>b)
	{
		return a;
	}
	else
	{
		return 20;
	}
}

/**


void
Java_com_demo_my_MainActivity_stringFromJNI2(
        JNIEnv *env,
        jobject *obj);
*/
 // extern "C" {  
 //     JNIEXPORT jstring JNICALL Java_com_demo_my_JNITest_stringFromJNI2(JNIEnv * env, jobject obj);  
 // };  
  
 JNIEXPORT jstring JNICALL Java_com_demo_my_JNITest_stringFromJNI2(JNIEnv *env, jobject obj)  
 {  
     int i = 0;  
     LOGD("########## patch2 i = %d", i);  
     int j=10;
     int ret = sum(i,j);
     LOGD("########## patch2 big one  = %d", ret);  
     return (*env)->NewStringUTF(env, "Hello from JNI !  Compiled with ABI " ".");
 } 