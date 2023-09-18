#include "main.h"

/**
 * reset_to_98 - takes a pointer to an int and update its value
 * @*n: the pointer
 * Return: void
 */
void reset_to_98(int *n)
{
	int integer, i;
	char prt[];

	prt[3] = "n=";
	for (i = 0 ; i !='\0' ; i++)
	{
		_putchar(prt[i]);
	}
	_putchar("%d", integer);
	_putchar('\n');
	*n = &integer;
	*n = 98;
	for (i = 0; i !='\0' ; i++)
	{
		_putchar(prt[i]);
	}
	_putchar("%d", integer);
	_putchar('\n');
}
