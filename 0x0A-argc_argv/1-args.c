#include <stdio.h>

/**
 * main - prints number of arguments passed into it
 * @argc: the count of the arguments
 * @argv: name of argument (unused)
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", (argc - 1));
	return (0);
}
