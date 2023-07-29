#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * comment here
 */
int main(int argc, char *argv[])
{
	int number, x;

	x = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	number = atoi(argv[1]);
	if (number < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	if (number % 25 >= 0)
	{
		x += number / 25;
		number = number % 25;
	}
	if (number % 10 >= 0)
	{
		x += number / 10;
		number = number % 10;
	}
	if (number % 5 >= 0)
	{
		x += number / 5;
		number = number % 5;
	}
	if (number % 2 >= 0)
	{
		x += number / 2;
		number = number % 2;
	}
	if (number % 1 >= 0)
	{
		x += number / 1;
	}
	printf("%d\n", x);
	return (0);
}


