#include "main.h"
/**
 * pointers and arrays
 * 
 */
char *_strcat(char *dest, char *src)
{
    int length=0;
    char *str_dest;
    str_dest = dest;
    while(*dest != '\0')
    {
        length++;
        dest++;
    }
    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return str_dest;
}
