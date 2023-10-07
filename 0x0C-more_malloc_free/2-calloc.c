#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements for an array
 * @size: size of blocks to be allocated
 * Return: a pointer to the allocated memory, or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	for (i = 0 ; i < nmemb ; i++)
	{
		ptr = malloc(size);
		if (ptr == NULL)
			return (NULL);
	}
	return (ptr);
}
