#include "main.h"

/**
 * _atoi - coverts a string to an integer
 * @s: type char pointer
 * Return: the integer
 */
int _atoi(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			if (s[i -1] == 43 || s[i -1] == 45)
				return (s[i - 1]);
			return (s[i]);
		}
		else
		{
			return (0);
		}
	}
}
