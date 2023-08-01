#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - function for that prints the nodes
 * @index: the index
 * @head: this is the initial pointer
 * Return: the node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *bck;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
		return (1);
	}

	bck = NULL;
	ptr = *head;
	for (i = 0; i < index; i++)
	{
		if (ptr == NULL)
		{
			return (-1);
		}

		bck = ptr;
		ptr = ptr->next;
	}

	if (ptr == NULL)
	{
		return (-1);
	}

	bck->next = ptr->next;
	free(ptr);

	return (1);
}
