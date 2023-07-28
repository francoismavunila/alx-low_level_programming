#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * 
 * Return: the number of nodes
 *
 * Return: the number of nodes printed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *y;
	unsigned int length = 0;

	while (str[length])
		length++;

	y = malloc(sizeof(list_t));
	if (!y)
		return (NULL);

	y->str = strdup(str);
	y->len = length;
	y->next = (*head);
	(*head) = y;

	return (*head);
}




