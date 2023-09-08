#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: 0 and exit the program
 */
int main(void)
{
	int num;

	num = 48;
	while (num < 58)
		putchar((char)num);
	putchar('\n');
	return (0);
}
