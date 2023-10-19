#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints the elements of a list_t list
 * @h: a pointer to a linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		i++;
	}
	return (i);
}
