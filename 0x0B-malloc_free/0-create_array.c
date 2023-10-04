#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and init it with a specific char
 * @size: size of the array
 * @c: the charater at the beginning of the array
 * Return: a pointer to the array of NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		a = (char *)malloc(size * sizeof(char));
		for (i = 0 ; i < size ; i++)
			a[i] = c;

		if (a == NULL)
			return (NULL);
		else
			return (a);
	}
	free(a);
}
