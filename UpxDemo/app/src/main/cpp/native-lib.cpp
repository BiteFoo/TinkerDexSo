#include <jni.h>
#include <string>
#include "logger.h"
#include "array_c.h"
extern "C"
{
#include "demo1.h"
};
extern "C"
jstring
Java_com_demo_upx_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    LOGI("**********************************\n");
    int ret = des(15,20);
    LOGI("from demo1 des ret = %d\n",ret);

    char* keyval = "603DEB1015CA71BE2B73AEF0857D77811F352C073B6108D72D9810A30914DFF4";
    int len = strlen(keyval);
    char buff[len];
    transform(keyval,buff);
    LOGE("transform back  buff =%s\n",buff);
    LOGE("**********************************\n");
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
