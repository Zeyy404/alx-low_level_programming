#include "main.h"

/**
 * create_file - creates a file
 * @filename: a pointer to the name of file that will be created
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int op, c, len = 0;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (op == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
		c = write(op, text_content, len);
		if (c != len)
			return (-1);
	}

	close(op);
	return (1);
}
