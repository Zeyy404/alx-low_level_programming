#include "main.h"

/**
 * print_triangle - prints a traingle
 * @size: the size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 0 ; i < size ; i++)
		{
			for (j = size ; j > i + 1 ; j--)
			{
				_putchar(32);
			}
			for (k = 0 ; k < i + 1 ; k++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}

	}
	else
		_putchar('\n');
}
