#include "function_pointers.h"

/**
 * print_name - Prints a given name to the console
 *
 * @name: The name to be printed
 * @f: functions that prints
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
