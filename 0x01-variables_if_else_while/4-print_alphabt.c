#include <stdio.h>

/**
 * main - print the alphabet in lowercase except for q and e
 * Return: 0 and exit the program
 */
int main(void)
{
	char c;

	c = 97;
	while ((c != 102 && c != 114) && c < 123)
		putchar((char)c), c++;
	putchar('\n');
	return (0);
}
