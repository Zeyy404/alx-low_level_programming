#include "main.h"

/**
 * _atoi - coverts a string to an integer
 * @s: type char pointer
 * Return: the integer if the string contain ones, 0 otherwise
 */
int _atoi(char *s)
{
	int i, result, sign;

	result = i = 0;
	sign = 1;

	while (s[i] != '\0' || s[i] != ' ' || s[i] != '\t')
	{
		if (s[i] == '-')
		{
			sign = sign * -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 - (s[i] - '0');
		}
		i++;
	}
	sign = sign * -1;
	return (result * sign);
}
