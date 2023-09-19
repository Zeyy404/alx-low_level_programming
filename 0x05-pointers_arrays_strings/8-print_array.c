#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: typa int pointer
 * @n: the variable to print elements
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		_putchar(a[n]);

	_putchar('\n');
}
