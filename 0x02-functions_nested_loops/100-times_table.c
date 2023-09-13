#include "main.h"

/**
 * print_times_table - prints the n times of table, starting from 0
 * @n: the number of times to print the table
 * Return: void
 */
void print_times_table(int n)
{
	int i;
	int j;

	while (n < 15 && n > 0)
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
		}
	}
}
