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
	char *_ptr = NULL;
	unsigned int i;

	if (new_size > old_size || ptr == NULL)
	{
		_ptr = malloc(new_size);
		if (_ptr == NULL)
			return (NULL);
		else if (_ptr != NULL && new_size < old_size)
		{
			for (i = 0 ; i < new_size ; i++)
			{
				_ptr[i] = ((char *)ptr)[i];
			}
		}
		free(ptr);
		return (_ptr);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	free(ptr);
	return (_ptr);
}
