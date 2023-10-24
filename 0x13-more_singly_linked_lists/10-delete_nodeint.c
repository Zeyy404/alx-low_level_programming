#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at the index of a listint_t list
 * @head: a pointer to a listint_t linked list
 * @index: the index of the node that should be deleted
 * Return: 1 is succeeded or -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *h, *aux;
	unsigned int i = 1, count;

	count = listint_len(*head);
	if (count == 0 || index > count)
		return (-1);

	if (index == 0)
	{
		aux = *head;
		*head = (*head)->next;
		free(aux);
		return (1);
	}
	h = *head;
	while (h != NULL)
	{
		if (i == index)
		{
			aux = h->next;
			h->next = aux->next;
			free(aux);
			return (1);
		}
		i++;
		h = h->next;
	}
	return (-1);
}

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: a pointer to a linked list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
