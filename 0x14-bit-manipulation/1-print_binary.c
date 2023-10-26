#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the decimal number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask, leftmost;
	int leading_zeros = 1;

	if (n == 0)
		_putchar('0');

	leftmost = (sizeof(unsigned long int) * 8 -1);
	mask = 1UL << leftmost;

	while (mask > 0)
	{
		if ((n & mask) || !leading_zeros)
		{
			leading_zeros = 0;
			if (n & mask)
				_putchar('1');
			else
				_putchar('0');
		}
		mask >>= 1;
	}
}
