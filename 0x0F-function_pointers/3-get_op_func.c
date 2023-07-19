#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
#include <string.h>

/**
 *comment comment
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
        {"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{"+", op_add},
		{"-", op_sub},
		{NULL, NULL}
	};
	unsigned int i;

	while (ops[i].op)
    for(i=0;i<6;i++)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
	}
	printf("Error\n");
	exit(99);
}
