#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: Type char pointer
 * Return: the length
 */
int _strlen(char *s)
{
	*s = '0';

	while (*s != '\0')
	{
		*s++;
	}
	return (*s);
}
