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

	for (i = 0 ; needle[i] != '\0' ; i++)
	{
		for (j = 0 ; haystack[j] != '\0' ; j++)
		{
			if (needle[i] == haystack[j])
			{
				p = &needle[i];
				return (p);
			}
		}
	}
	return (NULL);
}
