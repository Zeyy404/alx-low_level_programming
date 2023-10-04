#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: integer value
 * @av: type char pointer to pointer
 * Return: a pointer to a new string or NULL
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, size;
	char *str, *ptr = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0 ; i < ac ; i++)
	{
		str = av[i];
		for (j = 0 ; str[j] ; j++)
		{
			size++;
		}
		size++;
	}
	size++;

	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0, j = 0 ; i < ac && j < size ; i++)
	{
		str = av[i];
		for (k = 0 ; str[k] ; k++)
		{
			ptr[j] = str[k];
			j++;
		}
		ptr[j++] = '\n';
	}
	str[j] = '\0';

	return (ptr);
}
