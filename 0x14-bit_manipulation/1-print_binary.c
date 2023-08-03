#include "main.h"

/**
 * print_binary - integer to bnary
 * @n: int to be converted.
 *
 * Return: returns nothig.
 */
void print_binary(unsigned long int n)
{
    unsigned int remainder;
	if (n != 0)
	{
		if (n >> 1)
        {
            print_binary(n >> 1);
        }
			
        remainder = n & 1;
		_putchar((remainder) + '0');
	}
	else
	{
		_putchar('0');
	}
}
