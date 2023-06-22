#include "main.h"

/**
 * print numbers
 *   check
 * Return:0 or 1
 */

void print_numbers(void)
{
	char c = 0;

	while (c <= 9)
	{
		_putchar('0' + c);
		c++;

	}
	_putchar('\n');

}

