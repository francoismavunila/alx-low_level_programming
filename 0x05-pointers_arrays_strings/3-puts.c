#include "main.h"
/**
 * pointers and arrays
 * 
 */
void _puts(char *str)
{
    while(*str != '\0')
    {
        _putchar(*str);
        str++;
    }
    _putchar('\n');
}
