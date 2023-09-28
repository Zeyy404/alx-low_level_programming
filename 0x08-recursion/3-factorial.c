#include "main.h"

/**
 * factorial - prints the factorial of a given number
 * @n: the input number
 * Return: if n < 0 return -1 (error), otherwise return factorial value
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else
	{
		if (n == 0 || n == 1)
			return (1);
		else
			return (n * factorial(n - 1));
	}
}
