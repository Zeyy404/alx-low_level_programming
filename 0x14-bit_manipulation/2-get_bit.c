#include "main.h"

/**
 * get_bit - returns the value of a bit at a giving index
 * @index: the index of the bit wanted
 * @n: a decimal number
 * Return: the value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;
	return ((n & mask) != 0);
}
