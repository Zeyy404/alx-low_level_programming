#include "main.h"

/**
 * get_bit - returns the value of a bit at a giving index
 * @index: the index of the bit wanted
 * @n: a decimal number
 * Return: the value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;
	unsigned long int mask, leftmost;

	leftmost = (sizeof(unsigned long int) * 8 - 1);
	mask = 1UL << leftmost;
	i = 0;
	while (mask > 0)
	{
		if (i == index)
		{
			return (n & mask);
		}
		i++;
		mask >>= 1;
	}
	return (-1);
}
