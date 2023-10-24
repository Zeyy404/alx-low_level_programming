#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: a pointer to a linked list
 * @n: value to be set to the newly added node
 * Return: address of the new element, or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head = malloc(sizeof(size_t));

	if (new_head == NULL)
		return (NULL);

	new_head->n = n;
	new_head->next = *head;
	*head = new_head;

	return (new_head);
}
