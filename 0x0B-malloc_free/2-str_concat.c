#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *str_concat(char *s1, char *s2)
{
	int length_s1, length_s2, length_newstr, count, rndno = 0;
	char *newstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length_s1 = _strlen(s1);
	length_s2 = _strlen(s2);
	length_newstr = (length_s1 + length_s2);
	length_newstr++;

	newstr = malloc(sizeof(char) * length_newstr);
	if (newstr == NULL)
		return (NULL);

	for (count = 0; count < length_newstr; count++)
	{
		if (count < length_s1)
			newstr[count] = s1[count];
		else
		{
			newstr[count] = s2[rndno];
			rndno++;
		}
	}
	return (newstr);
}

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string to be checked
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
