#include "main.h"
/**
 * pointers and arrays
 * 
 */
void _puts_recursion(char *s)
{
       // _putchar(*s);
       	if (*s == '\0')
            {
                _putchar('\n');
            }
        else
        {
            _putchar(*s);
            _puts_recursion(s + 1);
        }
       

}

