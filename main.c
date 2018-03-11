#include <stdio.h> 
#include "Debug/log/log.h"
#define tag "main"

int main(void) 
{
    setLogFlag(ERROR_FLAG | INFO_FLAG | WARNNING_FLAG | DEBUG_FLAG);
    printf ("Hello World!\n");
    PRINT_DEBUG(tag, "%s\n", "hello china");
    return 0;
}