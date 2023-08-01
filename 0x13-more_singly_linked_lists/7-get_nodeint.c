#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index- function for that prints the nodes
 * @head: the pointer to the first node
 * @index: the index
 * Return: the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (head != NULL && index > 0)
	{
		head = head->next;
		index--;
	}

	if (head == NULL)
	{
		return (NULL);
	}

	return (head);
}

