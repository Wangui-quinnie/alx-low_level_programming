#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>


/**
  *_calloc - allocates memory for an array using malloc
  *@nmemb: number of elements in the array
  *@size: size of each element in bytes
  *Return: a pointer to the allocated memory or NULL on failure
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size;
	void *p;

	if (nmemb == 0 && size == 0)
	{
		return (NULL);
	}
	total_size = nmemb * size;

	p = malloc(total_size);
	if (p == NULL)
	{
		return (NULL);
	}
	memset(p, 0, total_size);
	return (p);
}
