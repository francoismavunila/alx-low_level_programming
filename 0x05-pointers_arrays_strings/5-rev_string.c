#include "main.h"
/**
 * pointers and arrays
 * 
 */
void rev_string(char *s)
{
    int length=0;
    char temp;
    while(*s != '\0')
    {
        length++;
        s++;
    }
    while(length>1)
    {
        
        temp = *s;
        *s = *(s-length);
        s--;
        *(s-length) = temp;
        length=length-2;
       
    }

    _putchar('\n');
}
