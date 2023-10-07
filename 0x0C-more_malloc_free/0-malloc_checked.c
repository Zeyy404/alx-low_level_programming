#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memor using malloc
 * @b: size of memory to be allocated
 * Return: a pointer to the allocated memory, or 98
 */
void *malloc_checked(unsigned int b)
{
	unsigned *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit (98);
	return (ptr);
}
