#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the mini number of coins to make change for an amount of money
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 or 1 (Error)
 */
int main(int argc, char *argv[])
{
	int q, d, n, c, p, cents, sum = 0;

	cents = atoi(argv[1]);
	if (argc - 1 == 1)
	{
		if (cents < 0)
		{
			printf("0\n");
			return (0);
		}
		else
		{
			q = cents / 25;
			cents -= q * 25;
			d = cents / 10;
			cents -= d * 10;
			n = cents / 5;
			cents -= n * 5;
			c = cents / 2;
			cents -= c * 2;
			p = cents / 1;
			cents -= p * 1;
		}
		sum = q + d + n + c + p;
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
