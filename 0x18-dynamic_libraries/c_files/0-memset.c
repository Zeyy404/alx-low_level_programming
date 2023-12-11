#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: type char pointer
 * @b: the constant byte value
 * @n: the number of bytes in the memory to be filled
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i != n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
