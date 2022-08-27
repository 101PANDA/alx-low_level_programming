#include "main.h"

/**
 * create_file - create new file with content
 * @filename: name of file
 * @text_content: string to be made content
 * Return: 1 on success
 * -1 on failure to create, read, write or filename is NULL
 */

int create_file(const char *filename, char *text_content)
{
	int fd, check;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (!text_content)
		text_content = "";

	check = write(fd, text_content, _strlen(text_content));
	if (check == -1)
		return (-1);

	check = close(fd);
	if (check == -1)
		return (-1);

	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string to be printed
 * Return: int (success)
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
