#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - this is the main function
 * @argc: ARGUMENT 1
 * @argv: argument 2
 * Return: this function returns zero
 */

int main(int argc, char *argv[])
{
	int Z;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	Z = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", Z);

	return (0);
}


