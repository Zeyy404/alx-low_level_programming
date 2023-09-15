#include "main.h"

/**
 * print_naumber - prints an integer
 * @n: the integer to be printed
 * Return: void
 */
void print_number(int n)
{
	int i;

	i = n;
	if (n < 0)
	{
		i = -n;
		_putchar(45);
	}
	else
	{
		i = n;
	}

	if (n / 10 > 0)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + 48);
}
