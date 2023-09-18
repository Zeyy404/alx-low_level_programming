#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: Type char pointer
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	i = _strlen(s);
	while (s[i] > -1)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
