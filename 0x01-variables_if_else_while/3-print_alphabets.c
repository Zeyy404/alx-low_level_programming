#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * Return: 0 and exit the program 
 */
int main(void)
{
	char c;

	c = 123
	while (c > 64)
		{
			if (c > 96)
				putchar((char)c);
			else if (c < 90 && c > 64)
				putchar((char)c);
			c--;
		}
	putchar('\n');
	return (0);
}
