#include "variadic_functions.h"
#include <stdarg.h>

/**
 *  * sum_them_all - function that returns the sum of all its parameters
 *   * @n: number of parameters passed to the function
 *    *
 *     * Return: sum of all parameters
 *      */

int sum_them_all(const unsigned int n, ...)
{
		unsigned int count;
			int total;
				va_list args;

					total = 0;

						va_start(args, n);

							if (n == 0)
									{
												return (0);
													}

								for (count = 0; count < n; count++)
										{
													total += va_arg(args, int);
														}

									va_end(args);

										return (total);
}
