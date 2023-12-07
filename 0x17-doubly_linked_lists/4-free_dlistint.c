#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: a pointer to the first node of linked list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
