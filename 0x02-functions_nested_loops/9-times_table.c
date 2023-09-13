#include "main.h"

/**
 * times_table - prints 9 times table, starting with 0
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			if (j == 0)
			{
				_putchar((i * j) + 48);
			}
			else if (i * j < 10)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar((i * j) + 48);
			}
			else
			{
				_putchar(44);
				_putchar(32);
				_putchar(((i * j) / 10) + 48);
				_putchar(((i * j) % 10) + 48);
			}

		}
		_putchar('\n');
	}
}
