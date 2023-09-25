#include "main.h"

/**
 * _strspn - gets the length pf a prefix substring
 * @s: type char pointer
 * @accept: type char pointer
 * Return: number of bytes from accept in s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, found;
	unsigned int n = 0;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		found = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				found = 1;
			j++;
		}
		j = 0;
		if (found == 0)
			break;
		i++;
		n++;
	}
	return (n);
}
