#include "function_pointers.h"

/*
*comments comments about function pointers
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int count;

	if (array && size && action)
	{
		for (count = 0; count < size; count++)
		{
			(*action)(array[count]);
		}
	}
}
