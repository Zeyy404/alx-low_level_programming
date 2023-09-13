#include <stdio.h>

/**
 * main - computes and prints the sum of all multiple of 3 and 5 below 1024
 * Return: 0 and exit program
 */
int main(void)
{
	int i, _x3, _x5;
	long int sum;

	sum = 0;
	for (i = 0 ; i < 1024 ; i++)
	{
		_x3 = i * 3;
		_x5 = i * 5;
		sum = sum + (_x3 + _x5);
	}
	printf("%ld\n", sum);
	return (0);
}
