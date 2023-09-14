#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 - 14
 * Return: void
 */
void more_numbers(void)
{
	int n, i;

	n = 0;
	while (n < 10)
	{
		i = 0;
		while (i < 15)
		{
			if (i > 9)
			{
				_putchar((i / 10) + 48)
			}
			_putchar((i % 10) + 48);
			i++;
		}
		n++;
		_putchar('\n');
	}
}
