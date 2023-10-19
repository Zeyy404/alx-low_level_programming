#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: a pointer to head of a linked list
 * @str: string - malloc'ed string
 * Return: address of the new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *h;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->next = NULL;
	new_node->str = strdup(str);
	new_node->len = strlen(str);

	if (!*head)
		*head = new_node;
	else
	{
		h = *head;
		while (h->next != NULL)
		{
			h = h->next;
		}
		h->next = new_node;
	}
	return (new_node);
}
