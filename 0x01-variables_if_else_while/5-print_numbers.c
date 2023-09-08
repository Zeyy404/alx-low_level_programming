#include <stdio>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: 0 and exit the program
 */
int main(void)
{
	int n;

	n = 0;
	while (n < 10)
		printf("%d", n), n++;
	printf("\n");
	return (0);
}
