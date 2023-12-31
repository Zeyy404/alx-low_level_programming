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

	if (head == NULL || *head == NULL)
		free(*head);
	else
	{
		h = *head;
		n = (*head)->n;
		h = (*head)->next;
		free(*head);
		*head = h;
	}

	return (n);
}
