#include "main.h"
/**
 * pointers and arrays
 * 
 */
char *_memset(char *s, char b, unsigned int n)
{
    char *rtn = *s;
    while(n>0)
    {
        *s=b;
        s--;
        n--;
    }

    return rtn;
}
