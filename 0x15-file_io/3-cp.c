#include "main.h"
#include <stdio.h>

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: arguments passed to the program vectors
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_f, fd_t, len_rd, x, y;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_f = open(argv[1], O_RDONLY);
	if (fd_f == -1)
	{
		dprintf(STDERR_FILENO, "Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_t = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_t == -1)
	{
		dprintf(STDERR_FILENO, "Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((len_rd = read(fd_f, buffer, 1024)) > 0)
	{
		if (write(fd_t, buffer, len_rd) != len_rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_f);
			exit(99);
		}
	}
	if (len_rd == -1)
	{
		dprintf(STDERR_FILENO, "Can't read from file %s\n", argv[1]);
		exit(98);
	}
	x = close(fd_f);
	y = close(fd_t);
	if (x == -1 || y == -1)
	{
		if (x == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_f);
		else
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_t);
		exit(100);
	}
	return (0);
}
