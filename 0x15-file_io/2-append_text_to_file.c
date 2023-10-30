#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: a pointer to the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success, or -1 on failur
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, c, len = 0;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_WRONLY | O_APPEND);
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
