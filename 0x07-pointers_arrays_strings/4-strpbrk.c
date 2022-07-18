#include "main.h"
/**
 * _strpbrk - searches string for se of bytes
 * @s: pointer to string to be checked
 * @accept: bytes that match
 * Return: *s
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
			s++;
		}
	return (0);
}
