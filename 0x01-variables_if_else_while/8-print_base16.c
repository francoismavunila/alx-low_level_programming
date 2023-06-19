#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: print alphabet in reverse order
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = '0'; letter <= '9'; letter++)
	{
		putchar(letter);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
