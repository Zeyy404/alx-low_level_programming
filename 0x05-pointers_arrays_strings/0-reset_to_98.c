#include "main.h"

/**
 * reset_to_98 - takes a pointer to an int and update its value
 * @n: the pointer
 * Return: void
 */
void reset_to_98(int *n)
{
	int integer, i;
	char prt[] = "n=";

	for (i = 0 ; i != '\0' ; i++)
		_putchar(prt[i]);
	_putchar(integer + 48);
	_putchar('\n');
	for (i = 0 ; i != '\0' ; i++)
		_putchar(prt[i]);
	n = &integer;
	*n = 98;
	_putchar(integer + 48);
	_putchar('\n');
}
