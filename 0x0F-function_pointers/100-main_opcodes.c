#include <stdio.h>
#include <stdlib.h>

/**
 * main -prints the opcodes of its own main function
 * @argc: agruments count
 * @argv: arguments vector
 * Return: 0 (Success), or Error with exit status of 1, or 2
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	unsigned char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	ptr = (char *)main;
	for (i = 0 ; i < bytes ; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02x\n", ptr[i]);
			break;
		}

		printf("%02x ", ptr[i]);
	}
	return (0);
}
