#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a pointer to a string of 0 and 1 chars
 * Return: converted numbers or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, base = 2, exp, len, result;
	unsigned int conv_num = 0;

	if (b == NULL)
		return (0);

	len = strlen(b) - 1;
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			exp = len;
			result = 1;
			while (exp > 0)
			{
				result *= base;
				--exp;
			}
			conv_num += (b[i] - '0') * result;
		}
		else
			return (0);
		len--;
		i++;
	}
	return (conv_num);
}
