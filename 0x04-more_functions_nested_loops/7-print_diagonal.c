#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times the character \ should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	i = 0;
	if (n > 0)
	{
		j = 1;
		while (n != 0)
		{
			_putchar(92);
			_putchar('\n');
			while (i != j)
			{
				_putchar(32);
				i++;
			}
			j++;
			n--;
		}
	}
	_putchar('\n');
}
