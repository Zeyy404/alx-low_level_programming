#include <stdio.h>

/**
 * main - print the alphabet in lowercase except for q and e
 * Return: 0 and exit the program
 */
int main(void)
{
	char c;

	c = 97;
	while ((c != 101 || c != 113) && c < 123)
		putchar((char)c), c++;
	putchar('\n');
	return (0);
}
