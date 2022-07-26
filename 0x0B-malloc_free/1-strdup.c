#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string to be checked
 * Return: int (success)
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * _strdup - return pointer to newly allocated space in memory
 * @str: pointer to the string
 * Return: pointer to allocated space in mem or null if str is equal to null
 */
char *_strdup(char *str)
{
	int strcount, i;
	char *str2;

	strcount = _strlen(str);
	str2 = malloc(sizeof(char) * strcount);
	if (str2 == NULL)
		return (NULL);

	for (i = 0; i < strcount; i++)
		str2[i] = str[i];
	return (str2);
}
