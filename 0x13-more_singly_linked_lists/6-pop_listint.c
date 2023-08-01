#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint- function for that prints the nodes
 * @head: the pointer to the first node
 * Return: the node
 */

int pop_listint(listint_t **head)
{
	int data = (*head)->n;

	listint_t *nd = *head;
    
	if (*head == NULL) {
		return 0;
	}

	*head = nd->next;
	free(nd);

	return (data);
}
