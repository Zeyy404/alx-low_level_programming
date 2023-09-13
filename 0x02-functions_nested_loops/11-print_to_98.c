#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the first printed number
 * Return: void
 */
void print_to_98(int n)
{
	while (n < 99)
	{
		printf("%d", n);
		if (n != 98)
		{
			printf(", ");
		}
		n++;
	}
	while (n > 97)
	{
		printf("%d", n);
		if (n != 98)
		{
			printf(", ");
		}
		n--;
	}
}
