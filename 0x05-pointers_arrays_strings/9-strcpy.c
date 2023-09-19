#include "main.h"

/**
 * _strcpy - cpoies the string pointed by src to the buffer pointed to by dest
 * @src: type char pointer
 * @dest: type char pointer
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}

	i++;
	dest[i] = src[i];
	
	return (dest);
}
