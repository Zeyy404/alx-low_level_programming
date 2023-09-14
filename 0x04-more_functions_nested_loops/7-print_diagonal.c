#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times the character \ should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	j = n;
	if (n > 0)
	{
		while (n != 0)
		{
			_putchar(92);
			_putchar('\n');
			i = 0;
			while (i != j - n)
			{
				_putchar(32);
				i++;
			}
			n--;
		}
	}
	_putchar('\n');
}
