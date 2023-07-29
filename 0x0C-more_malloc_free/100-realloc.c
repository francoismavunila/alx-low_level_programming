#include "main.h"

/**
 * _realloc - reallocation of memory using malloc and free
 * @ptr: pointer
 * @old_size: this is the old size
 * @new_size: represents new size
 * Return: the functions retuerns a pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *value, *val2;
	unsigned int i;

	if (ptr != NULL)
	value = ptr;
	else
	{ return (malloc(new_size)); }
	if (new_size == old_size)
	return (ptr);
	if (new_size == 0 && ptr != NULL)
	{ free(ptr);
	return (0); }
	val2 = malloc(new_size);
	if (val2 == NULL)
	return (0);
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(val2 + i) = value[i];
	}
	free(ptr);
return (val2);
}


