#include "3-calc.h"

/**
 * comment comment
 */

int main(int argc, char *argv[])
{
	int x;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", x);

	return (0);
}


