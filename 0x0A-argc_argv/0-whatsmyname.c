#include <stdio.h>

/**
 * main - prints the name of the program, followed by new line
 * @argc: argument count
 * @argv: string vector
 * Return: 0 and exit
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
