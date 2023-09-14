#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 - 14
 * Return: void
 */
void more_numbers(void)
{
	int n, i;

	n = 48;
	while (n < 58)
	{
		_putchar(n);
		if (n == 57)
		{
			i = 49;
			while (i < 52)
			{
				_putchar((n + i) / 10);
				_putchar((n + i) % 10);
				i++;
			}
		}
		n++;
	}
}
