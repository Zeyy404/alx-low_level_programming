#include "main.h"

/**
 * _atoi - coverts a string to an integer
 * @s: type char pointer
 * Return: the integer
 */
int _atoi(char *s)
{
	int i, result, sign;

	result = 0;
	sign = 1;
	for (i = 0 ; s[i] != '\0' ; i++)
	{
		while (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + s[i];
		}

		if (s[i] == '-')
			sign = -1;
	}
	return (result * sign);
}
