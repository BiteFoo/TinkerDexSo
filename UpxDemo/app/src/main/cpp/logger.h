//
// Created by John.Lu on 2017/4/6.
//

#ifndef UPXDEMO_LOGGER_H
#define UPXDEMO_LOGGER_H
#include <android/log.h>

#define  LOG_TAG    "ubu"
#define  LOGI(...)  __android_log_print(ANDROID_LOG_INFO,LOG_TAG,__VA_ARGS__)
#define  LOGE(...)  __android_log_print(ANDROID_LOG_ERROR,LOG_TAG,__VA_ARGS__)

#endif //UPXDEMO_LOGGER_H
