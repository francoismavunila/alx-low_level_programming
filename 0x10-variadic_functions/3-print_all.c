#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of parameters passed to the function
 *
 * Return: sum of all parameters
 */

void print_all(const char * const format, ...)
{
    int str_length = 0;
    va_list args;
    va_start(args, format);
    while(format[str_length] != '\0')
    {
        if(format[str_length]=='c'){
            printf("%c", va_arg(args, int));
        }
        else if (format[str_length]=='i')
        {
            printf("%d", va_arg(args, int));
        }
        else if (format[str_length]=='f')
        {
            printf("%f", va_arg(args, double));
        }
        else if (format[str_length]=='s')
        {
            if ( va_arg(args, char*) == NULL)
            {
                printf("(nil)");
            }
            else
            {
                printf("%s", va_arg(args, char*));
            }
            
        }
        
        str_length++;
    }
    printf("\n");
}
