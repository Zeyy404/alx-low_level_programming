#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * Return: 0 and exit the program
 */
int main(void)
{
	char c;

	c = 97;
	while (c < 123)
		putchar((char)c), c++;
	c = c /2 + 4;
	while (c < 91)
		putchar((char)c), c++;
	putchar('\n');
	return (0);
}
