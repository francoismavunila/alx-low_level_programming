#include "main.h"
/**
 * pointers and arrays
 * 
 */
char *_strncat(char *dest, char *src, int n)
{
        int count = 0;
        char *str_dest;
        str_dest = dest;
        while(*dest != '\0')
        {
                dest++;
        }
        while(count < n)
        {
                *dest = *src;
                dest++;
                src++;
                count++;
        }
        if(count<n)
        {
                *dest = '\0';
        }
        
        return str_dest;
}
