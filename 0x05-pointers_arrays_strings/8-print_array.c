#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: typa int pointer
 * @n: the number of the elements to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d, ", a[n])
	}

	_putchar('\n');
}
