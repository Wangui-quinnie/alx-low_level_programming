#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * alloc_grid - returns a pointer to a 2 dimensional array of integers
  * @width: the width of the 2D array
  * @height: the height of the 2D array
  * Return: a pointer to the 2D array or NULL on failure
  */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * width);
	for (i = 0; i < width; i++)
		grid[i] = malloc(sizeof(int) * height);
	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			grid[i][j] = 0;
	return (grid);
}
