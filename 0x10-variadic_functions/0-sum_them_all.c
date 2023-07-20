#include "variadic_functions.h"
#include <stdarg.h>
/**
 * va_args
 * 
 */

 int sum_them_all(const unsigned int n, ...)
 {
    unsigned int count;
    int total;
    total = 0;
    va_list args;
    va_start(args, count);
    if(n == 0)
    {
        return(0);
    }
    for (count=0; count < n; count++)
    {
        int arg = va_arg(args, int);
        total += va_arg(args,int);
    }
    va_end(args);
    return total;
 }
