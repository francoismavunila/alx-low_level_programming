#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Prints a variable number of integers to the console
 *
 * @separator: The string to be printed between each integer
 * @n: The number of integers to be printed
 * @...: The variable arguments containing the integers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	int number;
	va_list args;

	va_start(args, n);
	for (count = 0; count < n; count++)
	{
		number = va_arg(args, int);
		printf("%d", number);
		if ((separator != NULL) & (count < n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
