#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: a pointer to a pointer to the head of a linked list
 * @idx: the index of the list where the new node should be added
 * @n: the value the be set at the newly added node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *h;
	listint_t *new_node;
	unsigned int i = 1, count;

	count = listint_len(*head);
	if (head == NULL || idx > count)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	h = *head;
	while (h != NULL)
	{
		if (i == idx)
		{
			new_node->next = h->next;
			h->next = new_node;
			return (new_node);
		}
		i++;
		h = h->next;
	}
	return (NULL);
}

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: a pointer to a linked list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
