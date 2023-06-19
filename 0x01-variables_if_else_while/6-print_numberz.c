#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints 0 to 9 withount using printf
 * Return: 0
 */
#include <stdio.h>

int main(void) {
    int i;

    while (i < 10) {
        putchar(i + '0');
	i++;
    }

    putchar('\n');

    return 0;
}
