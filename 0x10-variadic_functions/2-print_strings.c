#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints a variable number of strings to the console
 *
 * @separator: The string to be printed between each string
 * @n: The number of strings to be printed
 * @...: The variable arguments containing the strings to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	char *number;
	va_list args;

	va_start(args, n);
	for (count = 0; count < n; count++)
	{
		number = va_arg(args, char *);
		if (number == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", number);
		}
		if ((separator != NULL) & (count < n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
