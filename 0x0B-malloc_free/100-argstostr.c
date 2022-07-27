#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - length of a string
 * @s: input char
 * Return: length of a string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * argstostr - concat
 * @ac: count
 * @av: vector
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	int length, j, i, strpos;
	char *newstr;

	if (!ac || !av)
	{
		return (NULL);
	}

	length = 0;
	for (i = 0; i < ac; i++)
	{
		length += _strlen(av[i]);
		length++;
	}

	length++;
	newstr = malloc(sizeof(char) * length);

	if (newstr == NULL)
	{
		return (NULL);
	}

	strpos = 0;
	for (i = 0; i < ac; i++)
	{
		/*length = _strlen(av[i]);*/

		for (j = 0; av[i][j] != '\0'; j++)
		{
			newstr[strpos] = av[i][j];
			strpos++;
		}
		if (av[i][j] == '\0')
		{
			newstr[strpos] = '\n';
			strpos++;
		}
	}

	return (newstr);
}
