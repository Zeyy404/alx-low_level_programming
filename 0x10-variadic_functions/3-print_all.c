#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * handle_char - prints a character
 * @args: argument to be printed
 * Return: void
 */
void handle_char(va_list args)
{
	char character = va_arg(args, int);

	printf("%c", character);
}

/**
 * handle_int - prints an integer
 * @args: argument to be printed
 * Return: void
 */
void handle_int(va_list args)
{
	int value = va_arg(args, int);

	printf("%d", value);
}

/**
 * handle_float - print a float
 * @args: argument to be printed
 * Return: void
 */
void handle_float(va_list args)
{
	float value = va_arg(args, double);

	printf("%f", value);
}

/**
 * handle_string - prints a string
 * @args: argument to be printed
 * Return: void
 */
void handle_string(va_list args)
{
	char *str = va_arg(args, char *);

	(str == NULL) ? printf("(nil)"), return : printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: the type of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	handle_t func[] = {
		{"c", handle_char},
		{"i", handle_int},
		{"f", handle_float},
		{"s", handle_string}
	};
	va_list args;
	int i, j = 0;
	char *sep = ", ";

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4 && format[i] != func[j].specifier[0])
			j++;

		if (j < 4)
		{
			func[j].f;
			if (format[i + 1])
				printf("%s", sep);
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
