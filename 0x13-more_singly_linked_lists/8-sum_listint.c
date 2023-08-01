#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint- function for that prints the nodes
 * @head: the pointer to the first node
 * Return: the node
 */

int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
