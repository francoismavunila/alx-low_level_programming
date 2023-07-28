#include "lists.h"

/**
 *
 * Return: the number of nodes
 *
 * Return: the number of nodes printed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *y, *x;
	unsigned int length = 0;

	if (str == NULL)
		return (NULL);

	y = malloc(sizeof(list_t));
	if (y == NULL)
		return (NULL);

	y->str = strdup(str);
	if (y->str == NULL)
	{
		free(y);
		return (NULL);
	}
	while (str[length])
		length++;
	y->len = length;
	y->next = NULL;

	if (*head == NULL)
	{
		*head = y;
		return (y);
	}

	x = *head;
	while (x->next)
		x = x->next;
	x->next = y;
	return (y);
}





