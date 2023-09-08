#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: 0 and exit the program
 */
int main(void)
{
	int n;

	n = 48;
	while (n < 58)
		putchar((char)n);
	putchar('\n');
	return (0);
}
