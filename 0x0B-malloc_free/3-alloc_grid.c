#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  *alloc_grid - returns a pointer to a two dimensional array
  *@width: grid row
  *@height: grid column
  *Return: pointer to a 2d array or NULL on failure
  */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **matrix;

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
			for (j = i; j >= 0; j--)
			{
				free(matrix[i]);
			}
			free(matrix);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			matrix[i][j] = 0;
		}
	}
	return (matrix);
}
