#include "main.h"
#include <stddef.h>
#include <stdlib.h>

void wstring(char **arr, char *str);
void _wstring(char **arr, char *str, int wstart, int wend, int ind);

/**
 * strtow - spilts a string into words
 * @str: type char pointer
 * Return: a pointer to an array of strings(word) or NULL
 */
char **strtow(char *str)
{
	char **arr;
	int i, wflag, wlen;

	i = wflag = wlen = 0;
	while (str[i])
	{
		if (wflag == 0 && str[i] != ' ')
			wflag = 1;
		if (i > 0 && str[i] == ' ' && str[i -1] != ' ')
		{
			wflag = 0;
			wlen++;
		}
		i++;
	}
	if (wflag == 1)
		wlen++;

	if (str == NULL || wlen == 0)
		return (NULL);

	arr = (char **)malloc(wlen * sizeof(char *));
	if (arr == NULL)
		return (NULL);

	wstring(arr, str);
	arr[wlen] = NULL;
	return (arr);
}

/**
 * wstring - converts words to strings
 * @arr: the char pointer to pointer
 * @str: type char pointer
 * Return: void
 */
void wstring(char **arr, char *str)
{
	int i, j, ws, wflag;

	i = j = wflag = 0;
	while (str[i])
	{
		if (wflag == 0 && str[i] != ' ')
		{
			ws = i;
			wflag = 1;
		}
		if (i > 0 && str [i] == ' ' && str[i - 1] != ' ')
		{
			_wstring(arr, str, ws, i, j);
			j++;
			wflag = 0;
		}
		i++;
	}
	if (wflag == 1)
		_wstring(arr, str, ws, i, j);
}

/**
 * _wstring - creates a word from a string
 * @arr: type char pointer to pointer
 * @str: type char pointer
 * @wstart: integer value (start position)
 * @wend: integer value (end position)
 * @ind: position of the null-terminator
 * Return: void
 */
void _wstring(char **arr, char *str, int wstart, int wend, int ind)
{
	int i, j;

	i = wend - wstart;
	i++;
	arr[ind] = (char *)malloc(i * sizeof(char));

	for (j = 0 ; wstart < wend ; j++)
	{
		arr[ind][j] = str[wstart];
		wstart++;
	}
	arr[ind][j] = '\0';
}
