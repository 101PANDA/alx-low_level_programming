#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file to append to
 * @text_content: appendation ;)
 * Return: 1 on success and -1 on failure or filename is NULL
 * if text_content is NULL append nothing
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, check;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		check = write(fd, text_content, _strlen(text_content));
		if (check == -1)
			return (-1);
	}

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
