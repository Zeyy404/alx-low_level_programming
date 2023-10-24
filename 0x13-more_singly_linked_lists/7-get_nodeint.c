#include "lists.h"

/**
 * get_nodeint - returns the nth node of a lintint_t linked list
 * @head: a pointer to the head of the linked list
 * @index: the index of the desired node
 * Return: index or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *h;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		if (i == index)
			h = head;
		head = head->next;
		i++;
	}
	return (h);
}
