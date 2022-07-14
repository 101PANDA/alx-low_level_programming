#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: pointer to the string to be concatenated
 * @src: pointer to the string to be concatenated from
 * @n: number of bytes to be concatenated
 * Return: char[dest] (success)
 */
char *_strncat(char *dest, char *src, int n)
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
		if (sndcount <= (n - 1))
			dest[fstcount] = src[sndcount];
		fstcount++;
		sndcount++;
	}
	return (dest);
}
