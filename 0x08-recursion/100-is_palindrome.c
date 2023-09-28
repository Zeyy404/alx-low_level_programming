#include "main.h"

#include "main.h"

/**
 * _strlen_recursion - prints the length of a string
 * @s: type char pointer
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

int is_palind(char *a, int b)
{
	if (b <= 1)
		return (1);
	else if (*a == *(a + b - 1))
		return (is_palind(a + 1, b - 2));
	else
		return (0);
}

/**
 * is_palindrome - check if the string is a palindrome or not
 * @s: type char pointer
 * Return: 1 if string is palindrome or 0 if not
 */
int is_palindrome(char *s)
{
	int i;

	i = _strlen_recursion(s);
	return (is_palind(s, i));
}
