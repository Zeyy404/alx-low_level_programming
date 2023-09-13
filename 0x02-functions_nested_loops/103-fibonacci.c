#include <stdio.h>

/**
 * main -  prints the sum of the even-valued terms less than 4,000,000
 * Return: 0 and exit
 */
int main(void)
{
	int f1, f2, f3, sum;

	f1 = 1;
	f2 = 2;
	sum = 0;
	while (f2 < 4000000)
	{
		if (f2 % 2 == 0)
		{
			sum = sum + f2;
		}
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}
	printf("%d\n", sum);
	return (0);
}
