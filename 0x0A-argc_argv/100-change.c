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
	int i, cents, ncoins, sum = 0;
	int coins[5] = {25, 10, 5, 2, 1};

	if ((argc - 1) != 1)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0 ; i < 5 ; i++)
	{
		ncoins = cents / coins[i];
		sum += ncoins;
		cents -= ncoins * coins[i];
	}
	printf("%d\n", sum);
	return (0);
}
