#include "main.h"

/**
 * _isalpha - checks for alphabetic charachter
 * @c: the input to be checked
 * Return: 1 if input is character & 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
