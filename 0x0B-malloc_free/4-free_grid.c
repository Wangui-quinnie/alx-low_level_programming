#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *free_grid - frees a 2D grid
  *@height: height of the grid
  *@grid: pointer to the grid to be freed
  *Return: void
  */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
