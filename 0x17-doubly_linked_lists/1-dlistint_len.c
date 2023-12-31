#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a doubly linked list
 * @h: a pointer to the first node of the linked list
 * Return: number of elements/nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
