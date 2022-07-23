#include <stdio.h>

/**
 * main - prints name of program
 * @argc: count of array
 * @argv: array of strings
 * Return: 0
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
