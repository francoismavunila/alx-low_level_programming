#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of parameters passed to the function
 *
 * Return: sum of all parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
        unsigned int count;
        char* number;
        va_list args;
        va_start(args,n);
        for(count=0; count<n; count++)
        {
            number = va_arg(args, char *);
            if (number == NULL)
            {
                printf("(nil)");
            }
            else{
                printf("%s", number);
            }
            
            if((separator != NULL) & (count<n-1))
            {
                printf("%s", separator);
            }
        }
        printf("\n");
}
