#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: type int pointer
 * @size: size of the array
 * @cmp: funcion pointer, takes an int as argument
 * Return: index of the first elements for which the cmp function
 * doesn't return 0, or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0 ; i < size ; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) != 0)
				break;
		}
	}
	return (i);
}
