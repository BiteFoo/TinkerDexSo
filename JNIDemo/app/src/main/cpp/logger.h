//
// Created by cat on 4/1/17.
//

#ifndef JNIDEMO_LOGGER_H
#define JNIDEMO_LOGGER_H
#include <android/log.h>

#define  LOG_TAG    "ubu"
#define  LOGI(...)  __android_log_print(ANDROID_LOG_INFO,LOG_TAG,__VA_ARGS__)
#define  LOGE(...)  __android_log_print(ANDROID_LOG_ERROR,LOG_TAG,__VA_ARGS__)

#endif //JNIDEMO_LOGGER_H
