#include "lists.h"

/**
 * listint_len- function for that prints the nodes
 * @h: the pointer to the first node
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
