#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - this is the function that 
 * @s: the firsr operand
 * Return: eturns an int
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int x = 0;

	while (ops[x].op)
	{
		if (strcmp(s, ops[x].op) == 0)
		{
			return (ops[x].f);
		}
		x++;
	}
	printf("Error\n");
	exit(99);
}


