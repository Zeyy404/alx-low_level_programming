#include "main.h"

/**
 * print_triangle - prints a traingle
 * @size: the size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0 ; i < size ; i++)
		{
			for (j = 0 ; j < size ; j++)
			{
				if (j == i)
					_putchar(35);
				else
				{
					_putchar(32);
				}
			}
			_putchar('\n');
		}

	}
	else
		_putchar('\n');
}
