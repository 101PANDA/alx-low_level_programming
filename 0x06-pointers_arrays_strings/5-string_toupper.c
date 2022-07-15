#include "main.h"
/**
 * string_toupper - change lowercase to upper
 * @str: pointer to string to be changed
 * Return: characteer
 */
char *string_toupper(char *str)
{
	int count = 0;

	while (*(str + count))
		{
			if ((*(str + count) >= 97) && (*(str + count) <= 122))
			{
				*(str + count) = *(str + count) - 32;
			}
			count++;
		}
	return (str);
}
