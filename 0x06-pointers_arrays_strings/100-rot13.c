#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: type char pointer
 * Return: str
 */
char *rot13(char *str)
{
	int i, j;
	char letter[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char rotter[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	for (i = 0; str[i] != '\0' ; i++)
	{
		for (j = 0 ; letter[j] != '\0' ; j++)
		{
			if (str[i] == letter[j])
			{
				str[i] = rotter[j];
				break;
			}
		}
	}
	return (str);
}
