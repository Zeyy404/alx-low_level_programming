#include "main.h"

/**
 * rev_string - reverses a string
 * @s: type char pointer
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	while (s[i] != '\0')
		i++;

	j = 0;
	i = i - 1;
	while (j != i)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		j++;
		i--;
	}
}
