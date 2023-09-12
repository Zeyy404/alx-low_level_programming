#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -1 * (n % 10);
		_putchar(n + 48);
		return (n);
	}
	else
	{
		n = n % 10;
		_putchar(n + 48);
		return (n);
	}
}
