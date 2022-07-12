#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: pointer to the string to be printed
 * Return: int (success)
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
