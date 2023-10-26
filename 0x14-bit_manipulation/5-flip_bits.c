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
	unsigned int counter, xor_result;

	xor_result = n ^ m;
	counter = 0;
	while (xor_result > 0)
	{
		counter += xor_result & 1;
		xor_result >>= 1;
	}
	return (counter);
}
