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
			if (i * j < 10)
			{
				_putchar((i * j) + 48);
			}
			else
			{
				_putchar(((i * j) / 10) + 48);
				_putchar(((i * j) % 10) + 48);
			}
			if ((i != 9 || j != 9) && j != 9)
			{
				_putchar(44);
				if (i * j < 10 || (i < 5 && j > 3))
				{
					_putchar(32);
					_putchar(32);
				}
				else
				{
					_putchar(32);
				}
			}
		}
		_putchar('\n');
	}
}
