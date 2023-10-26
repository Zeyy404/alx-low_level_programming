#include "main.h"

/**
 * flip_bits - returns the number of bits needed to flip to get from one
 *               one number another
 * @n: first decimal number
 * @m: second decimal number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;
	unsigned long int xor_result = n ^ m;

	while (xor_result > 0)
	{
		counter += xor_result & 1;
		xor_result >>= 1;
	}
	return (counter);
}
