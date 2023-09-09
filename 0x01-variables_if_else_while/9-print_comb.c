#include <stdio.h>

/**
 * main - print all possible combination of single-digit numbers
 * Return: 0 and exit the program
 */
int main(void)
{
	int n;

	n = 48;
	while (n < 58)
		{
			putchar((char)n);
			if (n != 57)
				{
					putchar(44);
					putchar(32);
				}
			n++;
		}
	putchar('\n');
	return (0);
}
