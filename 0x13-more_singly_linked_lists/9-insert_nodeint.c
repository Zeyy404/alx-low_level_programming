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
	listint_t *new_node = malloc(sizeof(listint_t));
	unsigned int i = 1;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	h = *head;
	while (h != NULL)
	{
		if (i == idx)
		{
			new_node->next = h->next;
			h->next = new_node;
			break;
		}
		i++;
		h = h->next;
	}
	if (i != idx)
	{
		free(new_node);
		return (NULL);
	}
	else
		return (h);
}
