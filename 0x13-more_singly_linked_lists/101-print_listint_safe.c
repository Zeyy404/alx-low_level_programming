#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: a pointer to a linked list
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *h, *_h;
	size_t i, j;

	if (head == NULL)
		return (98);

	h = head;
	i = 0;
	while (h != NULL)
	{
		printf("[%p] %d\n", (void *)h, h->n);
		i++;
		h = h->next;
		_h = head;
		j = 0;
		while (j < i)
		{
			if (h == _h)
			{
				printf("-> [%p] %d\n", (void *)h, h->n);
				return (i);
			}
			_h = _h->next;
			j++;
		}
		if (head == NULL)
			return (98);
	}
	return (i);
}
