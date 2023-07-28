#include <stdio.h>
#include "lists.h"

/**
 * prints all the elements of a linked list
 * and
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


