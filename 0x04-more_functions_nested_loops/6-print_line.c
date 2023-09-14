#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of times the character _ should be printed
 * Return: void
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n != 0)
		{
			_putchar(95);
			n--;
		}
	}
	_putchar('\n');
}
