#include "main.h"

/**
 * print numbers
 *   check
 * Return:0 or 1
 */

void print_most_numbers(void)
{
    char c = 0;

	while (c <= 9)
	{
        if((c==2) || (c==4))
        {
            c++;
            continue;
        }
		_putchar('0' + c);
		c++;

	}
	_putchar('\n');
}
