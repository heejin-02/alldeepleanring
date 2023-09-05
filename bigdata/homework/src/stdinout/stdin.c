#include <stdio.h>
#include <stdlib.h>
#include "stdinout/stdin.h"

char* input()
{
    char* str;
    int ret;

    str = (char*)malloc(sizeof(char)*BUFSIZ); 
    ret = scanf("%s", str);
    
    if(ret != 1)
        str = "input error";    

    return str;
}