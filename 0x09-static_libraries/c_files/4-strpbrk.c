#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of set of bytes
 * @s: type char pointer
 * @accept: type char pointer
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				return (p);
			}
		}
	}
	return (NULL);

}
