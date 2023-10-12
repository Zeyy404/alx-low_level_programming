#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_string - prints strings, followed by a new line
 * @separator: type char pointer, string to be printed between strings
 * @n: number of strings passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *x;
	va_list args;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	for (i = 0 ; i < n ; i++)
	{
		x = va_arg(args, const char *);
		if (x != NULL)
			printf("%s", x);
		else
			printf("(nil)");

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
