#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * pointers and arrays
 * 
 */
void *malloc_checked(unsigned int b)
{
    char *status = malloc(b);
    if(status == NULL)
    {
        exit(EXIT_FAILURE);
    }else
    {
        return status;
    }
}
