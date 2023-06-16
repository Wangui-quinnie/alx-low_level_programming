#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  *malloc_checked - allocates memory using malloc
  *@b: size of memory allocated
  *Return: a pointer to the allocated memory or cause
  *normal termination with a ststus value of 98
  */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
