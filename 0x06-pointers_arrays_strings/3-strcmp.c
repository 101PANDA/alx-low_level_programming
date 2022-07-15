#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: pointer to the first string to be compared
 * @s2: pointer to the next string to be compared
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, result = 0;

	for (; result == 0; i++)
	{
		if (*(s1 + i) == '\0' && *(s2 + i) == '\0')
			break;
		result = (*(s1 + i) - *(s2 + i));
	}
	return (result);
}
