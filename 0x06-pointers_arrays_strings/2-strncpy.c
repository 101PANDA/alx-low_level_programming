#include "main.h"
/**
* _strncpy - copies a string
* @dest: pointer to string to be copied into
* @src: pointer to the string to be copied from
* @n: max byte to be copied
* Return: char[dest]
*/
char *_strncpy(char *dest, char *src, int n)
{
	int varno;

	varno = 0;
	while (varno < n && dest[varno] != '\0')
	{
		dest[varno] = src[varno];
		varno++;
	}
	if (varno = n)
		dest[varno] = '\0';
	return (dest);
}
