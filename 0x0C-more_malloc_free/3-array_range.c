#include "main.h"
#include <stdlib.h>

int *array_range(int min, int max)
{
	int *array, i;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min) + 1);
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
