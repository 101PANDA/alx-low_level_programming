#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - return pointer to 2 dimensional array of int
 * @width: width of the two dimensional array
 * @height: height of the two dimentional array
 */

int **alloc_grid(int width, int height)
{
	int *matrix;
	int i, j;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	matrix = malloc(sizeof(int) * (height * width));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i < (height * width); i++)
			matrix[i] = 0;
	return (matrix);
}
