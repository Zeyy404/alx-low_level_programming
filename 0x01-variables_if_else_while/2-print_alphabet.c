#include <stdio.h>

/**
 * main - print the alphabet in lowercse
 * Return: 0 and exit the program
 */
int main(void)
{
	char num;
	num = 97;

	while (num < 123)
		putchar((char)num), num++;
	fwrite("\n");

	return (0);
}
