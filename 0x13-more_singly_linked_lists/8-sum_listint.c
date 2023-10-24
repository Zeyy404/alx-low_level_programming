#include "lists.h"

/**
 * sum_listint - calculates the sum of all data (n) of listint linked list
 * @head: a pointer to the head of a linked list
 * Return: the sum, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
