#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - multiplies two numbers
 * @argc: count of arguments passed
 * @argv: string(numbers) to be multiplied
 * Return: 0 upon success, 1 upon error
 */
int main(int argc, char *argv[])
{
	if (!(argc == 3))
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	return (0);
}
