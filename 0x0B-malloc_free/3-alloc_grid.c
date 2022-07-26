#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - return pointer to 2 dimensional array of int called matrix
 * @width: width of the two dimensional array
 * @height: height of the two dimentional array
 * Return: matrix
 */

int **alloc_grid(int width, int height)
{
	int **matrix;
	int i, j;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	matrix = malloc(sizeof(int *) * height);
	if (matrix == NULL)
	{
		free(matrix);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(sizeof(int) * width);
		if (matrix[i] == NULL)
		{
			for (; i >= 0; i--)
				free(matrix[i]);
			free(matrix);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			matrix[i][j] = 0;
	return (matrix);
}
