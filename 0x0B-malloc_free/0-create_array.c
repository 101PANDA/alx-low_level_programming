#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - create array of chars and initialize it with specific char
 * @size: size of array
 * @c: char the string will be initialized with
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	array = malloc(sizeof(char) * size);
	if (size == 0)
		return (NULL);
	if (array == NULL)
		return (NULL);
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
