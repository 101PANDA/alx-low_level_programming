#include "main.h"

/**
 * main - copies the content of a file to another
 * @argc: argument count
 * @argv: argument variable
 * Return: 1 on success
 */

int main(int argc, char **argv)
{
	int fd_from, fd_to, check;
	ssize_t byte_read, wrcheck;
	char buf[1024];
	char *errmessfrom = "Error: Can't read from file %s\n";
	char *errmessto = "Error: Can't write to %s\n";

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

	if (fd_from == -1)
		file_error(argv, errmessfrom, 1);
	if (fd_to == -1)
		file_error(argv, errmessto, 2);

	byte_read = 1024;
	while (byte_read == 1024)
	{
		byte_read = read(fd_from, buf, 1024);
		if (byte_read < 0)
			file_error(argv, errmessfrom, 1);
		wrcheck = write(fd_to, buf, byte_read);
		if (wrcheck < 0)
			file_error(argv, errmessto, 2);
	}

	check = close(fd_from);
	close_check(check, fd_from);
	check = close(fd_to);
	close_check(check, fd_to);
	return (0);
}

/**
 * file_error - print error message for file
 * @argv: file names
 * @errmessage: error message
 * @p: position of name
 * Return: void
 */
void file_error(char **argv, char *errmessage, int p)
{
	dprintf(STDERR_FILENO, errmessage, argv[p]);
	if (p == 1)
		exit(98);
	else if (p == 2)
		exit(99);
}

/**
 * close_check - ckeck return value of close command
 * @check: return value of close
 * @fd: file descriptor that is being checked
 * Return: void
 */

void close_check(int check, int fd)
{
	if (check < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
		exit(100);
	}
}
