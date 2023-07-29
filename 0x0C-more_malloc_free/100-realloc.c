#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc -  reallocation of memory
 * @ptr: pointer to memory
 * @old_size: the previous size
 * @new_size: the current size
 * Return: the function returns a pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *fke, *rlo;
	unsigned int i;

	if (ptr != NULL)
	fke = ptr;
	else
	{ return (malloc(new_size)); }
	if (new_size == old_size)
	return (ptr);
	if (new_size == 0 && ptr != NULL)
	{ free(ptr);
	return (0); }
	rlo = malloc(new_size);
	if (rlo == NULL)
	return (0);
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(rlo + i) = fke[i];
	}
	free(ptr);
return (rlo);
}


