#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated memory containing a copy of
 * string given as a parameter
 * @str: type char pointer
 * Return: a pointer or NULL
 */
char *_strdup(char *str)
{
	int i, size;
	char *ptr;

	if (str == NULL)
		return (NULL);

	for (size = 0 ; str[size] != '\0' ; size++)
		;
	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
