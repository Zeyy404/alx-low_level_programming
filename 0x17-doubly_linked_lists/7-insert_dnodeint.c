#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: a pointer to the pointer to the first node in a linked list
 * @idx: the index of the list where the new node should be added, start at 0
 * @n: the value stored at the newly added node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head, *new_node;
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	head = *h;
	if (head == NULL || idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = head;
		if (head != NULL)
			head->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	for (i = 0; i < idx && head != NULL; i++)
	{
		head = head->next;
	}
	if (head == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = head->next;
	new_node->prev = head;
	if (head->next != NULL)
		head->next->prev = new_node;
	head->next = new_node;
	head = new_node;
	return (new_node);
}
