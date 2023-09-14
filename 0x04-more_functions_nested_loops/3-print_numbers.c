#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 * Return: void
 */
void print_numbers(void)
{
	int n;

	n = 48;
	while (n < 58)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
