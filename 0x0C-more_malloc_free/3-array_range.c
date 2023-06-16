#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  *array_range - creates an array of integers
  *@min: minimum value of the array
  *@max: maximum value of the array
  *Return: pointer to the newly created array or
  *NULL on failure
  */

int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;

	array = malloc(sizeof(int) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		array[i] = min++;
	return (array);
}
