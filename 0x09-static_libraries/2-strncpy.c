#include "main.h"
/**
 * pointers and arrays
 * 
 */
char *_strncpy(char *dest, char *src, int n)
{
        int count = 0;
        char *str_dest;
        str_dest = dest;

        while(count < n)
        {
                *dest = *src;
                dest++;
                src++;
                count++;
        }
        
        return str_dest;
}
