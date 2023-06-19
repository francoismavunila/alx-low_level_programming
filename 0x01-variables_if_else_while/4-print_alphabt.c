#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all the lowercase and uppercase letters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if(c!='q'&& c!='e')
		{
		putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}

