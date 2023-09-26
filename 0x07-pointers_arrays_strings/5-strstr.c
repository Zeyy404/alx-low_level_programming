#include "main.h"
#include <stdio.h>

/**
 * _strstr - loactes a substring
 * @haystack: type char  pointer
 * @needle: type char pointer
 * Return: a pointer to the beginning of the located substring,
 * or NULL if substring not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *p;

	while (*needle != '\0')
	{
		while (*haystack != '\0')
		{
			if (*needle == *haystack)
			{
				p = &needle[i];
				return (p);
			}
		}
	}
	return (NULL);
}
