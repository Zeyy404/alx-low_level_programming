#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;
	while ( i < 10)
	{
		c = 97;
		while (c < 123)
		{
			_putchar(c);
			_putchar('\n');
			c++;
		}
		i++;
	}
}
