#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array using a comparison function
 *
 * @array: Pointer to the first element of the array
 * @size: The number of elements in the array
 * @cmp: Pointe the function to be used to compare each element to the target
 *
 * Return: The index of the first element for which cmp returns non-zero
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]) != 0)
			{
				return (i);
			}
		}
		return (-1);
	}
}
