#include "main.h"

/**
 * _strncat - concatenates two strings, using n bytes from the source string
 * @dest: type char pointer
 * @src: type char pointer
 * @n: number of bytes to be appended
 * Return: dest after being concatenated.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (dest[i] != '\0')
		i++;

	while (j != n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
