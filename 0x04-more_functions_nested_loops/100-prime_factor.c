#include <stdio.h>
#include <stdint.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: 0 and exit
 */
int main(void)
{
	unsigned int i;
	unsigned long n;

	n = 612852475143;
	for (i = 2; i < n ; i++)
	{
		if (n % i == 0)
		{
			n = n / i;
		}
	}
	printf("%ld\n", n);
	return (0);
}
