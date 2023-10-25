#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: a pointer to the head of a linked list
 * Return: the address of the node where the loop starts, or NULL.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *h, *_h;

	h = _h = head;
	while (_h != NULL && _h->next != NULL)
	{
		h = h->next;
		_h = _h->next->next;

		if (h == _h)
		{
			return (h->next);
		}
	}
	return (NULL);
}
