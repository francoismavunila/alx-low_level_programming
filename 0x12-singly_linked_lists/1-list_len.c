#include <stdio.h>
#include "lists.h"

/**
 * 
 * Return: the number of nodes
 *
 * Return: the number of nodes printed
 */
size_t list_len(const list_t *h)
{
	const list_t *y;
	unsigned int q = 0;

	y = h;
	while (y)
	{
		q++;
		y = y->next;
	}
	return (q);
}



