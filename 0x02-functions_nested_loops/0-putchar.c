#include "main.h"

/**
 * main - prints _putchar, followed by a new line
 * Return: 0 and exit the program
 */
int main(void)
{
	char c[] = "_putchar\n";
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
	return (0);
}
