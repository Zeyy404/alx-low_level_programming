#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers
 * Return: 0 and exit the program
 */
int main(void)
{
	int i, case_1, case_2;
	long int f1, f2, sum, _f1, _f2, f_1, f_2;

	f1 = 1;
	f2 = 2;
	case_1 = case_2 = 1;
	printf("%ld, %ld", f1, f2);
	for (i = 2 ; i < 98 ; i++)
	{
		if (case_1)
		{
			sum = f1 + f2;
			f1 = f2;
			f2 = sum;
			printf(", %ld", sum);
			if ((f1 + f2 < 0) && case_1 == 1)
				case_1 = 0;
		}
		else
		{
			if (case_2)
			{
				_f1 = (f1 % 1000000000);
				_f2 = (f2 % 1000000000);
				f1 = (f1 / 1000000000);
				f2 = (f2 / 1000000000);
				case_2 = 0;
			}
			f_1 = _f1 + _f2;
			f_2 = f1 + f2 + (f_1 / 1000000000);
			printf(", %ld", f_2);
			printf("%ld", (f_1 % 1000000000));
			f1 = f2;
			_f1 = _f2;
			f2 = f_2;
			_f2 = (f_1 % 1000000000);
		}
	}
	printf("\n");
	return (0);
}
