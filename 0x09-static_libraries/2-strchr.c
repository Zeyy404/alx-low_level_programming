#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: type char pointer
 * @c: type char pointer
 * Return: a pointer to the first occurance of char c in str s,
 * or NULL if char c not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);
	else
		return (NULL);
}
