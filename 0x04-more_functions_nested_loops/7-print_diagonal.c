#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times the character \ should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		while (n != 0)
		{
			_putchar(92);
			i = n;
			if (i != 1)
			{
				_putchar('\n');
				_putchar(32);
			}
			else
				_putchar('\n');
			n--;
		}
	}
	_putchar('\n');
}
