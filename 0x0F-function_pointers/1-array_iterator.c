#include "function_pointers.h"
#include <stdlib.h>

/**
  *array_iterator - executes a function given as a parameter on each
  *element of an array
  *@array: pointer to the integer array
  *@size: size of the array
  *@action: a pointer to the function to be used
  *Return: void
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
}
