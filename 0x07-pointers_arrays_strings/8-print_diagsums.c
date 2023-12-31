#include "main.h"
#include <stdio.h>

/**
 * pointers and arrays
 * 
 */
void print_diagsums(int *a, int size)
{
	int i;
    int sum1 = 0;
    int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + (size * i + i));
		sum2 += *(a + (size * i + size - 1 - i));
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
