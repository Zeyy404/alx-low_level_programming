#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: type int pointer
 * @n: the number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	i = j = 0;
	while (i < n)
		i++;
	i--;
	while (i > j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j++;
		i--;
	}
}
