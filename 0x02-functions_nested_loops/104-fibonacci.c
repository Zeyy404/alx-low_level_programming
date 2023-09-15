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
	sum = 0;
	printf("%lu, %lu, ", f1, f2);
	for (i = 2 ; i < 98 ; i++)
	{
		if (sum < 2**32-1)
		{
			sum = f1 + f2;
			f1 = f2;
			f2 = sum;
			printf("%lu, ", sum);
		}
		else
		{
			_f1 = (f1 % 1000000000);
			_f2 = (f2 % 1000000000);
			f1 = (f1 / 1000000000);
			f2 = (f2 / 1000000000);

			f_1 = _f1 + _f2;
			f_2 = f1 + f2 + (f_1 % 1000000000);
			printf("%lu", f_2);
			printf("%lu, ", f_1 % 1000000000);
			f1 = f2;
			_f1 = _f2;
			f2 = f_2;
			_f2 = (f_1 % 1000000000);
		}
	}
	printf("\n");
	return (0);
}
