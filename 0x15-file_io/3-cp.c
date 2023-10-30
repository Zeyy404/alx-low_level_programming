#include "main.h"
#include <stdio.h>

/**
 * fcheck - checks if files can be opened
 * @fd_f: first file
 * @fd_t: second file
 * @argv: passed arguments vectors
 * Return: void
 */
void fcheck(int fd_f, int fd_t, char *argv[])
{
	if (fd_f == -1)
	{
		dprintf(STDERR_FILENO, "Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fd_t == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: arguments passed to the program vectors
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_f, fd_t, close_f, close_t;
	ssize_t rd, wr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_f = open(argv[1], O_RDONLY);
	fd_t = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	fcheck(fd_f, fd_t, argv);
	rd = 1024;
	while (rd == 1024)
	{
		rd = read(fd_f, buffer, 1024);
		if (rd == -1)
			fcheck(-1, 0, argv);
		wr = write(fd_t, buffer, rd);
		if (wr == -1)
			fcheck(0, -1, argv);
	}
	close_f = close(fd_f);
	close_t = close(fd_t);
	if (close_f == -1 || close_t == -1)
	{
		if (close_f == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_f);
		if (close_t == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_t);
		exit(100);
	}
	return (0);
}
