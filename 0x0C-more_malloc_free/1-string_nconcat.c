#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings *s1 and *s2 refrence to n
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * @n: number of char to concatenate from s2
 * Return: pointer to allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr, *news2;

	if (s1  == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	if (s1 == NULL)
		s1 = "";
	if (s1 == NULL)
		s1 = "";
	news2 = _strdup(s2, n);
	if (news2 == NULL)
		return (NULL);

	ptr = str_concat(s1, news2);
	free(news2);
	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
/**
 * _strdup - duplicates str with ref to strcount
 * @str: pointer to the string
 * @strcount: number of characters to copy from str
 * Return: pointer to allocated space in mem or null if str is equal to null
*/
char *_strdup(char *str, int strcount)
{
	int i;
	char *str2;

	if (str == NULL)
		return (NULL);
	if (strcount == _strlen(str))
		strcount = _strlen(str);
	strcount++;

	str2 = malloc(sizeof(char) * strcount);
	if (str2 == NULL)
		return (NULL);

	for (i = 0; i < strcount; i++)
		str2[i] = str[i];
	return (str2);
}

/**
 * str_concat - concates two strings
 * @s1: first string to concate
 * @s2: second string to concate
 * Return: the two strings concated side by side
 */

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
