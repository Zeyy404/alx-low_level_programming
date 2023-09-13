#include "main.h"

/**
 * print_times_table - prints the n times of table, starting from 0
 * @n: the number of times to print the table
 * Return: void
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 15 && n > -1)
	{
		for (i = 0 ; i < n + 1 ; i++)
		{
			for (j = 0 ; j < n + 1 ; j++)
			{
				if (j == 0)
				{
					_putchar((i * j) + 48);
				}
				else if (i * j < 10)
				{
					_putchar(32);
					_putchar(32);
					_putchar((i * j) + 48);
				}
				else if (i * j > 9 && i * j < 100)
				{
					_putchar(32);
					_putchar(((i * j) / 10) + 48);
					_putchar(((i * j) % 10) + 48);
				}
				else if (i * j > 99)
				{
					_putchar(((i * j) + 48) / 10);
					_putchar(((i * j) + 48) % 10);
					_putchar(((i * j) + 48) / 100);
				}

				if (i != n || j != 0)
				{
					_putchar(44);
					_putchar(32);
				}
			}
			_putchar('\n');
		}
	}
}
