#include "main.h"


/**
 * main - multiplies two variables
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	unsigned long int ans;
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{  printf("Error\n");
				exit(98);
			}
		}
	}
	ans = atoi(argv[1]) * atoi(argv[2]);
	printf("%lu\n", ans);
	return (0);
}
