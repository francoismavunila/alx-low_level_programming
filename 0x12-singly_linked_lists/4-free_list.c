#include <stdlib.h>
#include "lists.h"

/**
 * 
 * Return: the number of nodes
 *
 * Return: the number of nodes printed
 */
void free_list(list_t *head)
{
	list_t *var;

	while (head)
	{
		var = head->next;
		free(head->str);
		free(head);
		head = var;
	}
}




