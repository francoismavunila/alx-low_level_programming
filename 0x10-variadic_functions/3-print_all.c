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
    char* str;
    va_list args;
    va_start(args, format);
    while(format[str_length] != '\0')
    {
        if(format[str_length]=='c'){
            printf("%c", va_arg(args, int));
            str_length++;
            format[str_length] != '\0'? printf(", "): 0;
        }
        else if (format[str_length]=='i')
        {
            printf("%d", va_arg(args, int));
            str_length++;
            format[str_length] != '\0'? printf(", "): 0;
        }
        else if (format[str_length]=='f')
        {
            printf("%f", va_arg(args, double));
            str_length++;
            format[str_length] != '\0'? printf(", "): 0;
        }
        else if (format[str_length]=='s')
        {
            str = va_arg(args, char *);
            if (str == NULL)
            {
                printf("(nil)");
            str_length++;
            format[str_length] != '\0'? printf(", "): 0;
            }
            else{
                printf("%s", str);
            str_length++;
            format[str_length] != '\0'? printf(", "): 0;
            }

        }

    }
    printf("\n");
}
                                                                                                                                   
                                                                                                                                                                                                                                                                
