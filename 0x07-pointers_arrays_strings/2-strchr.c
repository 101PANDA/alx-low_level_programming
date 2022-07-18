#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer to the string
 * @c: character being located
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int count;

	for (count = 0; s[count] != c; count++)
	{
		if (s[count] == c)
			return (&s[count]);
	}
	if (s[count] == c)
		return (&s[count]);
	else
		return (0);
}
