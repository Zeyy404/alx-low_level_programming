#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 * Return: 0 and exit the program
 */
int main(void)
{
	int n;
	char c;

	n = 48;
	c = 97;
	while (n < 58)
		putchar((int)n), n++;
	while (c < 103)
		putchar((char)c), c++;
	putchar('\n');
	return (0);
}
