#include "main.h"

/**
 * is_prime - finds if input is prime or not
 * @x: input integer
 * @y: integer
 * Return: 1 or 0.
 */
int is_prime(int x, int y)
{
	if ((y * y) == x || x < 0)
		return (0);
	else if ((y * y) > x)
		return (1);
	else
		return (is_prime(x, y + 1));
}

/**
 * is_prime_number - returns 1 if input integer is prime number
 * @n: input integer
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	return (is_prime(n, 0));
}
