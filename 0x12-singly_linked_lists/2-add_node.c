#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the head of a linked list
 * @str: string - malloc'ed string
 * Return: address of the new element, or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *_str;
	list_t *new_head = malloc(sizeof(size_t));
	if (new_head == NULL)
		return (NULL);

	_str = strdup(str);
	if (_str == NULL)
		return (NULL);

	new_head->str = _str;
	new_head->len = strlen(_str);
	new_head->next = *head;
	*head = new_head;

	return (new_head);
}
