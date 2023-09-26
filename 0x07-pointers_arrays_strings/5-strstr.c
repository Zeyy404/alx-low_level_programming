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
	while (*haystack != '\0')
	{
		char *s = haystack;

		while (*needle != '\0')
		{
			if (*needle == *haystack)
			{
				needle++;
				haystack++;
			}
			else
				break;
		}
		if (*needle == '\0')
			return (s);
		haystack++;
	}
	return (NULL);
}
