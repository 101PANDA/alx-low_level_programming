#include "main.h"
#include <stdlib.h>

int *array_range(int min, int max)
{
	int *array, min2, i;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min) + 1);
	if (array == NULL)
		return (NULL);

	min2 = min;
	for (i = 0; i < ((max - min) + 1); i++)
		array[i] = min2++;
	return (array);
}
