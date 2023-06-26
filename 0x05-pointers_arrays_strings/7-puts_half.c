#include "main.h"
/**
 * pointers and arrays
 * 
 */
void puts_half(char *str)
{
    int length=0;
    while(*str != '\0')
    {
        length++;
        str++;
    }
    if((length%2)!=0)
    {
        length=(length-1)/2;
    }else
    {
        length = length/2;
    }
    while (length>=0)
    {
         _putchar(*(str-length));
	 length--;
    }
    _putchar('\n');
    
}
