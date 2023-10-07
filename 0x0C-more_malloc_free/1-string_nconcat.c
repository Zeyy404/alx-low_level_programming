#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: type char pointer
 * @s2: type char pointer
 * @n: number of bytes to be concatenate from s2
 * Return: a pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0 ; s1[i] != '\0' ; i++)
		;
	for (j = 0 ; s2[j] != '\0' ; j++)
		;
	if (n > j)
		n = j;
	n++;

	ptr = malloc(sizeof(*ptr) * (i + n));
	if (ptr == NULL)
		return (NULL);

	for (k = 0; k < i ; k++)
	{
		ptr[k] = s1[k];
	}
	j = 0;
	for (; k < n ; k++, j++)
	{
		ptr[k] = s2[j];
	}
	ptr[k] = '\0';
	return (ptr);
}
