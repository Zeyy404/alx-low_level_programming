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
	unsigned int i, j, k, l, size;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

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
	for (l = 0; l <= j ; l++, k++)
	{
		ptr[k] = s2[l];
	}
	return (ptr);
}
