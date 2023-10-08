#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value included in the array
 * @max: maximum value included in the array
 * Return: a pointer to the newly created array, or NULL
 */
int *array_range(int min, int max)
{
	void *ptr;
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);

	arr = (int *)ptr;
	for (i = 0; min <= max ; i++, min++)
	{
		arr[i] = min;
	}
	return (arr);
}
