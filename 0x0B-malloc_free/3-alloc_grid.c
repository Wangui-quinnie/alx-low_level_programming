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
	int **grid;

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
