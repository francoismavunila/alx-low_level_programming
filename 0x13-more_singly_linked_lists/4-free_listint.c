#include "lists.h"
#include <stdlib.h>
/**
 * free_listint- function for that prints the nodes
 * @head: the pointer to the first node
 * Return: the node
 */

void free_listint(listint_t *head)
{
	while (head != NULL) 
	{
		listint_t *currentNode = head;
		head = head->next;
		free(currentNode);
	}
}
