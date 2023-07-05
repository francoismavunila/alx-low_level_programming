#include "main.h"
/**
 * pointers and arrays
 * 
 */
void _print_rev_recursion(char *s)
{
        if(*s=='\0')
        {
                _putchar(*s);
                *s='\0';
                
        }else
        {
                _print_rev_recursion(s+1);
        }
    
}
