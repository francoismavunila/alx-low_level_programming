#include "function_pointers.h"

/**
 * array_iterator - Executes a given function on each element of an array
 *
 * @array: Pointer to the first element of the array
 * @size: The size of the array
 * @action: Pointer to the function to be executed on each element of the array
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
