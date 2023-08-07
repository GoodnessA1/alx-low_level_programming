#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - Reads text file
 * @filename: url of file to be read
 * @letters: number to be read
 *
 * Return: value read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, n, w;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	n = read(fd, buf, letters);
	w = write(1, buf, n);

	if (fd == -1 || n == -1 || w == -1 || n != w)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);

	return (w);
}
