#include "main.h"
/**
 * pointers and arrays
 * 
 */
void print_rev(char *s)
{
    int length=0;
    while(*s != '\0')
    {
        length++;
        s++;
    }
    
    while(length>=0)
    {
        s--;
        _putchar(*s);
        length--;
    }
}
