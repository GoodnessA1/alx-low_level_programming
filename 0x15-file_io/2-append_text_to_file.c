#include "main.h"
/**
 * append_text_to_file - Appends text
 * @filename: File
 * @text_content: Text
 *
 * Return: 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, w;
	int len;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	return (1);
}
