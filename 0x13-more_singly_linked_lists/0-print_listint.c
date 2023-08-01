#include "lists.h"

/**
 * print_listint - function for that prints the nodes
 * @h: the pointer to the first node
 * returns the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	while (h != NULL) 
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
    	}
	return count;
}
