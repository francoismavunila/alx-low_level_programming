#include "main.h"

/**
 * print numbers
 *   check
 * Return:0 or 1
 */

void print_line(int n)
{
    int i=0;
    if(n<=0)
    {
        _putchar('\n');
    }
    else
    {
        while(i<n)
        {
        _putchar('_');
        i++;
        }
    }
    _putchar('\n');
}
