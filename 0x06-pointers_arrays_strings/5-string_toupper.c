#include "main.h"

/**
 * string_toupper - changes all lowercase of a string to uppercase
 * @str: type char pointer
 * Return: the string after modification
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] <= 122 && str[i] >=97)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
