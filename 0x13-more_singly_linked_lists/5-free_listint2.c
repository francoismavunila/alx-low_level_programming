#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2- function for that prints the nodes
 * @head: the pointer to the first node
 * Return: the node
 */

void free_listint2(listint_t **head)
{
	while (*head != NULL) 
	{
		listint_t *nd = *head;
        
		*head = (*head)->next;
		free(nd);
	}

	*head = NULL;
}
