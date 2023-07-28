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
	list_t *val;
	unsigned int length = 0;

	while (str[length])
		length++;

	val = malloc(sizeof(list_t));
	if (!val)
		return (NULL);

	val->str = strdup(str);
	val->length = length;
	val->next = (*head);
	(*head) = val;

	return (*head);
}



