#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: Type char pointer
 * Return: the length
 */
int _strlen(char *s)
{
	int i;
	
	for (i = 0 ; *s != '\0'; i++)
	{
		*s++;
	}
	return (i);
}
