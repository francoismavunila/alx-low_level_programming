#include <stdio.h>
#include "lists.h"

/**
 * 
 * Return: the number of nodes
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\x");
		else
			printf("[%u] %s\x", h->len, h->str);
		h = h->next;
		x++;
	}

	return (x);
}


