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
	int i, j, k, size = ac;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] ; j++)
		{
			size++;
		}
	}
	size++;

	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	k = 0;
	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] ; j++)
		{
			ptr[k++] = av[i][j];
			j++;
		}
		ptr[k++] = '\n';
	}
	ptr[size] = '\0';

	return (ptr);
}
