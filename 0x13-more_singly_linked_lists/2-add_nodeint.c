#include "lists.h"

/**
 * listint_len- function for that prints the nodes
 * @h: the pointer to the first node
 * Return: the number of nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *plusNode = malloc(sizeof(listint_t));
	if (plusNode == NULL) 
	{
		return (NULL);
	}

	plusNode->n = n;

	plusNode->next = *head;
	*head = plusNode;

	return (plusNode);
}
