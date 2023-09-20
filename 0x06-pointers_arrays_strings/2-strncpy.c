#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: type char pointer
 * @src: type char pointer
 * @n: number of bytes to be copied
 * Return: dest with the copied bytes.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; (str[i] != '\0') && (i < n) ; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n ; i++)
		dest[i] = '\0';

	return (dest);
}
