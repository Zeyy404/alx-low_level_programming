#include "main.h"

/**
 * _memcpy - copies memerory area
 * @dest: type char pointer
 * @src: type char pointer
 * @n: number of bytes from memory to be copied
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i != n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
