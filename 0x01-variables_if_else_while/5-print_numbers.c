#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: print values from 1 to 9 followed by anew line
 * Return: 0
 */
int main(void)
{
	char c = 0;

	while (c <= 9)
	{
		printf("%d",c);
		c++;
	}
	putchar('\n');
	return (0);
}
