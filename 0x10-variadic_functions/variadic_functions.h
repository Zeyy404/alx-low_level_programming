#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct handle - Struct handle
 *
 * @specifier: The data type specifier
 * @f: The function associated
 */
typedef struct handle
{
	char *specifier;
	void (*f)(va_list args);
} handle_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
