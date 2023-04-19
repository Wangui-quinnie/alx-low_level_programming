#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>


/**
  *int_index - searches for an integer
  *@size: number of elements in the array
  *@array: pointer to the array
  *@cmp: pointer to the function used to compare values
  *Return: the index of the first element for which the cmp function
  *does not return 0 or -1 if no element matches
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
