#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: a pointer to a linked list
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *h, *_h;
	size_t i;
	int loop = 0;

	if (head == NULL)
		return (98);

	h = _h = head;
	i = 0;
	while (_h != NULL && _h->next != NULL)
	{
		h = h->next;
		_h = _h->next->next;
		if (h == _h)
		{
			loop = 1;
			h = head;
			while (h != _h->next)
			{
				printf("[%p] %d\n", (void *)h, h->n);
				h = h->next;
				i++;
			}
			printf("[%p] %d\n", (void *)h, h->n);
			h = h->next;
			i++;
			printf("-> [%p] %d\n", (void *)h, h->n);
			return (i);
		}
	}
	if (!loop)
	{
		h = head;
		while (h != NULL)
		{
			printf("[%p] %d\n", (void *)h, h->n);
			h = h->next;
		}
	}
	return (i);
}
