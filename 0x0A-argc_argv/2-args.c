#include <stdio.h>

/**
 * main - prints all agreguemts received
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 and exit
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
		printf("%s\n", argv[i]);

	return (0);
}
