#include "main.h"
/**
 * main - Entry point
 * Return:0
 */
int print_last_digit(int y)
{
    int r = y%10;
    	if (r < 0)
		r = r * -1;

	_putchar(r + '0');
    return r;

}
