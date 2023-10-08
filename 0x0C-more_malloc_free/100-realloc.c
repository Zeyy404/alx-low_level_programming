#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: type void pointer
 * @old_size: previous allocated memory size
 * @new_size: new allocated memory size
 * Return: the pointer ptr or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *_ptr = NULL, *tptr;
	unsigned int i;

	if (new_size > old_size || ptr == NULL)
	{
		_ptr = malloc(new_size);
		if (_ptr == NULL)
			return (NULL);
		else if (ptr != NULL)
		{
			tptr = (int *)ptr;
			free(ptr);
		}

		for (i = 0 ; i <= old_size ; i++)
		{
			_ptr[i] = tptr[i];
		}
		return (_ptr);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (_ptr);
}
