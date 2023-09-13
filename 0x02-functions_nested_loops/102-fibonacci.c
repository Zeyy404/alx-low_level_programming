#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers, starting with 1 and 2
 * Return: 0 and exit the program
 */
int main(void)
{
	long int i, f1, f2, sum;

	f1 = 1;
	f2 = 2;
	printf("%ld, l%d, ", f1, f2);
	for (i = 2 ; i < 50 ; i++)
	{
		sum = f1 + f2;
		f1 = f2;
		f2 = sum;
		if (i != 49)
			printf("%ld, ", sum);
		else
			printf("%ld\n", sum);
	}
	return (0);
}
