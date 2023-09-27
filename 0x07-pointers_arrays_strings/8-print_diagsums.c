#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints sum of the two diagonals of integers square matrix
 * @a: type integer pointer
 * @size: size of array to be printed
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum_1, sum_2;

	sum_1 = sum_2 = 0;
	for (i = 0; i < size ; i++)
	{
		for (j = 0 ; j < size ; j++)
		{
			if (i == j)
			{
				sum_1 += a[i * size + i];
			}
			if ((i + j) == (size - 1))
			{
				sum_2 += a[i * size + (size - 1 - i)];
			}
		}
	}
	printf("%d, %d\n", sum_1, sum_2);
}
