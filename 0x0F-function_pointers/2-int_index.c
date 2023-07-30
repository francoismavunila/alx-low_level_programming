#include "function_pointers.h"

/**
 *int_index - function that checks the index
 *@*arrar - pointer to an array
 *@size - shows the size of teh array
 *@cmp - comparaison
 *print_name - prints the name of the function
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	if(size <= 0)
	{
		return (-1);
	}
	else
	{
		for(i=0; i<size; i++)
		{
			if((*cmp)(array[i])!= 0)
			{
				return (i);
			}
		}
		return(-1);
	}
    
}
