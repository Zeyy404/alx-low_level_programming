#include "lists.h"

/**
 * reverse_listint - reverse a listint_t linked list
 * @head: a pointer to a linked list
 * Return: a pointer to the first node in reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *curr = *head, *next;

	while (curr != NULL)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*head = prev;
	return (*head);
}
