#include <stdlib.h>
#include "main.h"
#include <unistd.h>

/**
 * read_textfile - read a text and prints it to the standard output
 * @filename: name of the file to read from
 * @letters: number of letters/char tobe read
 * Return: number of letters printed
 * 0 if file cant be opened, read or file name is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n_printed;
	int fd, check;
	void *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	check = read(fd, buf, letters);
	if (check == -1)
		return (0);

	n_printed = write(STDOUT_FILENO, buf, letters);
	if (n_printed == -1)
		return (0);

	check = close(fd);
	if (check == -1)
		return (0);
	free(buf);
	return (n_printed);
}
