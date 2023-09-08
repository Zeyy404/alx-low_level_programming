#include <stdio.h>

/**
 * main - print the alphabet in lowercse
 * Return: 0 and exit the program
 */
int main(void)
{
	char c;

	c = 97;
	while (c < 123)
		putchar((char)c), c++;
	putchar('\n');

	return (0);
}
