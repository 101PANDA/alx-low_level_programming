#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array dependent on the range provided
 * @min: minimum value of the range
 * @max: maximum value of the range
 * Return: array and NULL if min is greater than max or malloc fails
 */
int *array_range(int min, int max)
{
	int *array, i;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(*array) * (max - min) + 1);
	if (array == NULL)
		return (NULL);

	i = 0;
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
