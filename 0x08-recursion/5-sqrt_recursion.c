#include "main.h"

/**
 * _sqrt_rec - finds the natural sqr root
 * @x: input number
 * @y: input number
 * Return: sqr root value
 */
int _sqrt_rec(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y < x)
		return (_sqrt_rec(x, y + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - prints the natural square root of a number
 * @n: input number
 * Return: if n doesn't have a nat sqr root -1, else value of sqr root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_rec(n, 1));
}
