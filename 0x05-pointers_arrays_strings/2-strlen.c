#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: Type char pointer
 * Return: the length
 */
int _strlen(char *s)
{
	int i = 0;

	for (*s = 0 ; *s != '\0' ; *s++)
	{
		i++;
	}
	return (i);
}
