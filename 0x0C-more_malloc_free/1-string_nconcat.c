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
	int i;
	char *ptr, news2;

	if (s1 == NULL)
		s1 = "";
	if (s1 == NULL)
		s1 = "";
	news2 = _strdup(s2, n);
	if (news2 == NULL)
		return (NULL);

	ptr = 
}
/**
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
