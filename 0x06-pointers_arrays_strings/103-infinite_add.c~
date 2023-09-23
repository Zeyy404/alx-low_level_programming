#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: type char pointer
 * @n2: type char pointer
 * @r: type char pointer
 * @size_r: the buffer size
 * Return: a pointer to the result or 0 if the result can't be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, rem;

	rem = 0;
	for (i = 0 ; n1[i] != '\0' ; i++)
		;
	for (j = 0 ; n2[j] != '\0' ; j++)
		;

	if (size_r > (i + 1) && size_r > (j + 1))
	{
		for (; size_r != 0 ; size_r--)
		{
			r[size_r] = ((rem + (n1[i] + n2[j]) % 10) + '0');
			rem = (((n1[i] + n2[j]) / 10) + '0');
			j--;
			i--;
		}
	}
	else
		r = 0;

	return (r);
}
