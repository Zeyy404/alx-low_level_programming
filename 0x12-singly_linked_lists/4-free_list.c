#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: a pointer to a singly linked list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux->str);
		free(aux);
	}

	head = NULL;
}
