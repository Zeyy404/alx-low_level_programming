#include "main.h"

/**
 * rev_string - reverses a string
 * @s: type char pointer
 * Return: void
 */
void rev_string(char *s)
{
	int i;

	while (s[i] != '\0')
		i++;

	j = 0;
	i = i - 1;
	while (i != -1)
	{
		s[j] = temp;
		s[j] = s[i];
		s[i] = temp;
		j++;
		i--;
	}
}
