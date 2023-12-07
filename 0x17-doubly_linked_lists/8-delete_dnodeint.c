#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a doubly linked list
 * @head: a pointer to the pointer to the first node of a linked list
 * @index: the index of the node that should be deleted, starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	h = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(h);
		return (1);
	}
	for (i = 0; i < index && h != NULL; i++)
	{
		h = h->next;
	}
	if (h == NULL)
	{
		return (-1);
	}
	h->prev->next = h->next;
	if (h->next != NULL)
		h->next->prev = h->prev;
	free(h);
	return (1);
}
