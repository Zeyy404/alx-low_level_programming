#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: a pointer to a pointer to a head of a linked list
 * Return: the head node's data (n)
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *h;

	if (head == NULL)
		free(head);
	else
	{
		h = *head;
		n = h->n;
		*head = (*head)->next;
		free(h);
	}

	return (n);
}
