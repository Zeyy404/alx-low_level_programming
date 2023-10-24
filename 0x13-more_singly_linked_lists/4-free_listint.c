#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: a pointer to a linked list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}

	head = NULL;
}
