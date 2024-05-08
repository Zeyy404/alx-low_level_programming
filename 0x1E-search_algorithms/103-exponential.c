#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm.
 * @array: A pointer to the first element of the array to search.
 * @low: The starting index of the search range.
 * @high: The ending index of the search range.
 * @value: The value to search for.
 *
 * Return: The index of the value if found, otherwise -1.
 */
int _binary_search(int *array, size_t low, size_t high, int value)
{
	size_t mid, i;

	while (low <= high)
	{
		mid = (low + high) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
			printf("%d%s", array[i], (i == high) ? "\n" : ", ");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located, or -1 if value is not
 *         present in array or if array is NULL.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound, low, high;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
	{
		printf("Value checked array[%d] = [%d]\n", 0, array[0]);
		return (0);
	}

	bound = 1;
	while (bound < size && array[bound] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = (bound < size) ? bound : size - 1;

	return _binary_search(array, low, high, value);
}
