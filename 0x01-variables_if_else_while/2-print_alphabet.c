#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: this function prints alphabets from a -z
 */
int main(void)
{
	char letter  = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
	return (0);
}
