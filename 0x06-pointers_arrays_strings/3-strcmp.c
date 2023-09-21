#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: type char pointer
 * @s2: type char pointer
 * Return: integer, result of the comparison
 */
int _strcmp(char *s1, char *s2)
{
	int i, result;

	result = 0;
	for (i = 0 ; (s1[i] != '\0') && (s2[i] != '\0') ; i++)
	{
		if (s1[i] == s2[i])
			;
		else
		{
			result = (s1[i] - s2[i]) + 48;
			break;
		}
	}
	return (result);
}
