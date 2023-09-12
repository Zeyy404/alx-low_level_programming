#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followd by a new line
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	c = 97;
	while (c < 123)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
