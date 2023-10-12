#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - calculates sum of all of its parameters
 * @n: number of parameters
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, x, sum = 0;

	va_list args;
	va_start(args, n);

	if (n == 0)
		return (0);
	for (i = 0 ; i < n ; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}
	va_end(args);

	return (sum);
}
