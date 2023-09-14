#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 * Return: void
 */
void print_numbers(void)
{
	int i, n;

	i = 0;
	n = 48;
	while (i < 58)
	{
		_putchar(n);
		i++;
	}
	_putchar('\n');
}
