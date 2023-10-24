#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: a pointer to a linked list
 * @n: the value to be set at the newly added node
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h;
	listint_t *end_node = malloc(sizeof(size_t));

	if (end_node == NULL)
		return (NULL);

	end_node->next = NULL;
	end_node->n = n;

	if (*head == NULL)
	{
		*head = end_node;
	}
	else
	{
		h = *head;
		while (h->next != NULL)
			h = h->next;
		h->next = end_node;
	}
	return (end_node);
}
