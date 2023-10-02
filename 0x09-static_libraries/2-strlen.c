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
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
