#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: Type char pointer
 * Return: void
 */
void print_rev(char *s)
{
	int i, str;

	i = 0;
	while (s[i] != '\0')
		i++;

	while (i > -1)
	{
		--i;
		str = s[i];
		_putchar(str);
	}
	_putchar('\n');
}
