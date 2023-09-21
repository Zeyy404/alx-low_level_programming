#include "main.h"

/**
 * print_number - prints an integer
 * @n: int variable
 * Return: void
 */
void print_number(int n)
{
	int is_min = 0;

	if (n == -2147483648)
	{
		is_min = 1;
		n = -214748364;
	}

	if (n < 0)
	{
		_putchar(45);
		n = n * -1;
	}

	if (n / 10 > 0)
	{
		print_number(n / 10);
	}

	_putchar((n % 10) + 48);

	if (is_min)
		_putchar(56);
}
