#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 and exit
 */
int main(int argc, char *argv[])
{
	int i;
	(void) argv;

	for (i = 1 ; i < argc ; i++)
		;

	i--;
	printf("%d\n", i);
	return (0);
}
