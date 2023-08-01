#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end- function for that prints the nodes
 * @head: the pointer to the first node
 * @n: integer
 * Return: the node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *plusNode = malloc(sizeof(listint_t));

	if (plusNode == NULL)
	{
		return (NULL);
	}

	plusNode->n = n;
	plusNode->next = NULL;

	if (*head == NULL)
	{
		*head = plusNode;
		return (plusNode);
	}

	listint_t *lastNode = *head;

	while (lastNode->next != NULL)
	{
		lastNode = lastNode->next;
	}

	lastNode->next = plusNode;

	return (plusNode);
}
