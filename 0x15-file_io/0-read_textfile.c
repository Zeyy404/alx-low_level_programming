#include "main.h"

/**
 * read_textfile - reads a text and prints it to the POSIX standard output
 * @filename: a pointer the file to be read
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t op, rd, wr;

	if (filename == NULL)
		return (0);
	op = open(filename, O_RDONLY);
	if (op == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	rd = read (op, buf, letters);
	if (rd == -1)
	{
		free(buf);
		return (0);
	}

	wr = write(STDOUT_FILENO, buf, rd);
	if (wr == -1 || wr != rd)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(op);
	return (wr);
}
