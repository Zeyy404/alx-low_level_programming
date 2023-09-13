#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers
 * Return: 0 and exit the program
 */
int main(void)
{
	unsigned long int i, f1, f2, sum;

	f1 = 1;
	f2 = 2;
	printf("%lu, %lu, ", f1, f2);
	for (i = 2 ; i < 98 ; i++)
	{
		sum = f1 + f2;
		f1 = f2;
		f2 = sum;
		if (i != 97)
			printf("%lu, ", sum);
		else
			printf("%lu\n", sum);
	}
	return (0);
}
