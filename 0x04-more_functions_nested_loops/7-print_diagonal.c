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
		for (i = 0 ; i < n ; i++)
		{
			for (j = 0 ; j < n ; j++)
			{
				_putchar(32);
				j++;
			}
			_putchar(92);
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
