#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *pointers and arrays
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *blk;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	blk = malloc(nmemb * size);
	if (blk != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			blk[i] = 0;
		return (blk);
	}
	else
	{
		return (NULL);
	}
}
