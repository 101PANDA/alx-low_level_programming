#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: pointer to the string to be concatenated
 * @char: pointer to the string to be concatenated from
 * Return: char[dest] (success)
 */
char *_strcat(char *dest, char *src)
{
	int fstcount, sndcount;

	fstcount = 0;
	while (dest[fstcount] != '\0')
	{
		fstcount++;
	}

	sndcount = 0;
	while (src[sndcount] != '\0')
	{
		dest[fstcount] = src[sndcount];
		fstcount++;
		sndcount++;
	}
	return (dest);
}
