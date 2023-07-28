#ifndef LIST
#define LIST
#include <stdlib.h>
#include <string.h>

/**
 * prints all the elements of a linked list
 * and
 *
 * Return: the number of nodes printed
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
