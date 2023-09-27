#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: type char pointer to a pointer
 * @to: type char pointer
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
