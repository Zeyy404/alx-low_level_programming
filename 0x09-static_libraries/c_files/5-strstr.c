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
		char *p = needle;
		char *s = haystack;

		while (*p == *haystack && *p != '\0')
		{
			p++;
			haystack++;
		}
		if (*p == '\0')
			return (s);
		haystack++;
	}
	return (NULL);
}
