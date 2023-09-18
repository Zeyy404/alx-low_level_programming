#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: Type char pointer
 * Return: the length
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	*s = '0';
	while (*s != '\0')
	{
		*s++;
	}
	i = *s;
	return (i);
}
