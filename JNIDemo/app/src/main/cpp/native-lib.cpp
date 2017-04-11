#include <jni.h>
#include <string>

#include "ase.h"
#include "logger.h"
extern "C"
{
#include "demo1.h"
};

extern "C"
{
void _init(void){

    printf("%s\n","testing");
}

jstring
Java_com_jni_demo_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    int ret = sum(10, 30);
    char* msg = "send sum back to java call \n";
    printlog(msg);
    LOGI("sum =%d\n", ret);
    LOGI("**********des fuction");

    int dec = des(10,15);//include header demo1.h ,but can't load file ? why

    LOGI("result =%d\n",dec);
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

}
