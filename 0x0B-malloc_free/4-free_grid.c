#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  *free_grid - frees a 2d grid previously created by the alloc_grid()
  *@grid: parameter
  *@height: parameter
  *Return: 0
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
