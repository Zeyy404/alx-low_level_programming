#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: arguments value
 * Return: int result of the operation
 */
int main(int argc, char *argv[])
{
	int num1, num2, calc;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}
	calc = f(num1, num2);
	printf("%d\n", calc);

	return (0);
}
