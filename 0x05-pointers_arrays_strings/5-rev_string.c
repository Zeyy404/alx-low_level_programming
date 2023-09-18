#include "main.h"

/**
 * rev_string - reverses a string
 * @s: type char pointer
 * Return: void
 */
void rev_string(char *s)
{
	int i;

	while (s[i] != '\0')
		i++;

	while (i > -1)
	{
		--i;
		_putchar(s[i]);
	}
}
