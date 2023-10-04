#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: type char pointer
 * @s2: type char pointer
 * Return: pointer to the new allocated memory or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, size;
	char *ptr;

	for (i = 0 ; s1[i] != '\0' ; i++)
		;
	for (j = 0 ; s2[j] != '\0' ; j++)
		;
	j++;

	size = i + j;
	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (k = 0 ; k <= i ; k++)
	{
		ptr[k] = s1[k];
	}
	j = 0;
	for (; k <= size ; k++)
	{
		ptr[k] = s2[j];
		j++;
	}
	return (ptr);
}
