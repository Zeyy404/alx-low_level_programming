#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: a pointer to a pointer to a linked list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *aux, *h;

	h = *head;
	while (h != NULL)
	{
		aux = h;
		h = h->next;
		free (aux);
	}

	h = NULL;
}
