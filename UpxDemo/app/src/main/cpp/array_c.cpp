//
// Created by John.Lu on 2017/4/6.
//
#include <string.h>
#include "array_c.h"
void transform(char* data,char buff[])
{
LOGI("transform... %s",data);
int len=strlen(data);
    int ret_len=len /2;
    char ret[ret_len];
    int i=0;
    char  buf[2];
    for(;i<len;i++)
    {
        ret[i]=data[i+1];
        buf[0]=data[i];
        buf[i]=data[i+1];
        i++;
    }
    LOGI("transform... finally %s",ret);
}

