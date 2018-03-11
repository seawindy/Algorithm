#include <stdio.h>
#include <stdarg.h>

#include "log.h"

unsigned int logFlag;

void setLogFlag(unsigned int flag)
{
    logFlag = flag;
}

unsigned int getLogFlag()
{
    return logFlag;
}

void print_log(unsigned int flag, const char *fmt, ...)
{
    if (0 == (flag & logFlag))
    {
        return;
    }

    char buffer[MAX_LEN] = {0};

    // just char *
    va_list param;

    // get the first pointer after fmt
    va_start(param, fmt);

    // 将格式化的输出转换成字符串
    vsnprintf(buffer, MAX_LEN, fmt, param);

    // 防止字符串的长度大于MAX_LEN
    buffer[MAX_LEN] = 0;

    // param == NULL
    va_end(param);
    printf("%s", buffer);
}