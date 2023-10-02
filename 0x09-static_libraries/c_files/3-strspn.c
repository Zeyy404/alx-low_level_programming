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

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		found = 0;
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (found == 0)
			break;
		n++;
	}
	return (n);
}
