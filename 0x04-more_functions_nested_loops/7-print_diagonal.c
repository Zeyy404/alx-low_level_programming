#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times the character \ should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		j = n;
		while (n != 0)
		{
			i = 0;
			while (i != j - n)
			{
				if (i == j - n)
					_putchar(92);
				else
					_putchar(32);
				i++;
			}
			_putchar('\n');
			n--;
		}
	}
	else
		_putchar('\n');
}