#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter on each elemets of
 * an array.
 * @array: type int pointer
 * @size: size of the array
 * @action: function pointer that takes an int value as a argument
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0 ; i < size ; i++)
	{
		action(array[i]);
	}
}
