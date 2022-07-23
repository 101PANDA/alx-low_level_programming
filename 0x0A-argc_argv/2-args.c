#include <stdio.h>

/**
 * main - prints all arguments it recieves
 * @argc: count of arguments used
 * @argv: array of arguments used
 * Return: 0
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
