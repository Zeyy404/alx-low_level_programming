#include "main.h"

/**
 * strlen - calculates the length of a string
 * @s: Type char pointer
 * Return: the length
 */
int _strlen(char *s)
{
	int i = 0;

	do
	{
		i++;
	} while (*s != '\0');

	while (i != 0)
	{
		_putchar((i % 10) + 48);
		i = i / 10;
	}
}
