#include<stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *pointers and arrays
 *
 */
int main(int argc, char *argv[])
{
	if (argc > 2)
	{
		int value1 = atoi(argv[1]);
		int value2 = atoi(argv[2]);
		int result = value1 * value2;
		printf("%d\n", result);
	}
	else
	{
		printf("Error");
	}

	return (0);
}
