#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: type char pointer
 * @f: function pointer, takes type char pointer argument
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
