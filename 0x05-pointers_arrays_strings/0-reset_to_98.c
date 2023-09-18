#include "main.h"

/**
 * reset_to_98 - takes a pointer to an int and update its value
 * @n: the pointer
 * Return: void
 */
void reset_to_98(int *n)
{
	int n;

	n = &n;
	*n = 98;
	_putchar((n / 10) + 48);
	_putchar((n % 10) + 48);
	_putchar('\n');
}
