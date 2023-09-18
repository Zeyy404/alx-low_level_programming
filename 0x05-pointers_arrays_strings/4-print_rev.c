#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: Type char pointer
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;

	while (i > -1)
	{
		_putchar(s[i-1]);
		i--;
	}
	_putchar('\n');
}
