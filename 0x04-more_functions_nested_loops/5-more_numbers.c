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
		i = 48;
		while (i < 58)
		{
			_putchar(i);
			if (i == 57)
			{
				j = 1;
				while (j < 5)
				{
					_putchar(49);
					_putchar(49 + j);
					j++;
				}
			}
			i++;
		}
		n++;
	}
}
