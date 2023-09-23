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
	int i, j, k, l, rem, sum, temp;

	rem = 0;
	for (i = 0 ; n1[i] != '\0' ; i++)
		;
	for (j = 0 ; n2[j] != '\0' ; j++)
		;
	if (size_r < i || size_r < j)
		return (0);

	for (i -= 1, j -= 1, k = 0 ; k < size_r ; i--, j--, k++)
	{
		sum = rem;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		if (i < 0 && j < 0 && sum == 0)
			break;
		rem = sum / 10;
		r[k] = (sum % 10) + '0';
	}
	r[k] = '\0';
	if (k == size_r && (n1[i] != '\0' || n2[j] != '\0'))
	{
		return (0);
	}
	for (k -= 1, l = 0; l < k ; k--, l++)
	{
		temp = r[k];
		r[k] = r[l];
		r[l] = temp;
	}
	return (r);
}
