#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integrs
 *                   using Jump searching algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located, or If value is not presented
 *            in array or if array is NULL, your function must return -1
 **/
int jump_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t jump = sqrt(size);
	size_t high = 0;
	size_t i;

	if (array == NULL)
		return (-1);

	while (high < size && array[high] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", high, array[high]);
		low = high;
		high += jump;
	}
	printf("Value found between indexes [%lu] and [%ld]\n", low, high);
	for (i = low; i <= high && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
