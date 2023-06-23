#include "main.h"

/**
 * print numbers
 *   check
 * Return:0 or 1
 */

void print_numbers(void)
{
    char c = 0;
    int i=0;
    while(i<10)
    {
        while (c <= 14)
        {
            _putchar('0' + c);
            c++;

        }
        i++;
        _putchar('\n');
    }

	_putchar('\n');

}

