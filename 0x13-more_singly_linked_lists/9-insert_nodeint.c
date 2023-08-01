#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function for that prints the nodes
 * @idx: the index
 * n: te value
 * Return: the node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n) {
    listint_t *nodeOne, *ptr;
    unsigned int i;

    if (head == NULL)
        return (NULL);

    nodeOne = malloc(sizeof(listint_t));
    if (nodeOne == NULL)
        return (NULL);

    nodeOne->n = n;

    if (idx == 0) {
        nodeOne->next = *head;
        *head = nodeOne;
        return (nodeOne);
    }

    ptr = *head;
    for (i = 0; i < idx - 1; i++) {
        if (ptr == NULL)
            return (NULL);
        ptr = ptr->next;
    }

    if (ptr == NULL)
        return (NULL);

    nodeOne->next = ptr->next;
    ptr->next = nodeOne;

    return (nodeOne);
}
