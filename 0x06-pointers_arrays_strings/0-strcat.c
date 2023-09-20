#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: type char pointer
 * @src: type char pointer
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = _putchar(src[j]);
		j++;
		++i;
	}

	dest[i] = '\0';
	return (dest);
}
