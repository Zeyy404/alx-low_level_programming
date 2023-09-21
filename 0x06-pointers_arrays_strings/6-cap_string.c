#include "main.h"

/**
 * cap_string - capitalizes all word of a string
 * @str: type char pointer
 * Return: str
 */
char *cap_string(char *str)
{
	int i, j, val;
	char sep[] = " \n\t,;.!?\"(){}";

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[0] >= 97 && str[0] <= 122)
			val = 1;
		for (j = 0 ; sep[j] != '\0' ; j++)
		{
			if (str[i] == sep[j])
				val = 1;
		}

		if (val)
		{
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] = str[i] - 32;
				val = 0;
			}
			else if (str[i] >= 65 && str[i] <= 90)
				val = 0;
			else if (str[i] >= 48 && str[i] <= 57)
				val = 0;
		}
	}
	return (str);
}
