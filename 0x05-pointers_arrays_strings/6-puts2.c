#include "main.h"
/**
 * pointers and arrays
 * 
 */
void puts2(char *str)
{
    int count =0;

    while(*str != '\0')
    {
     if((count%2) == 0)
     {
        _putchar(*str);
     }
    
        str++;
    }

    _putchar('\n');
}
