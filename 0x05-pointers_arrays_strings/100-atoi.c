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
	if (s[i] != '\0')
	{
		while (s[i] < '0' || s[i] > '9')
		{
			if (s[i] == '-')
			{
				sign = sign * -1;
			}
			i++;
		}
		while (s[i] >= '0' && s[i] <= '9')
		{
			if (result > 0)
			{
				result = result * 10 - (s[i] - '0');
				i++;
			}
			else
			{
				result = result * 10 + (s[i] - '0');
				i++;
			}
		}
	}

	return (result * sign);
}
