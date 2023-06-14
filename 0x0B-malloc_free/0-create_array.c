#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  *create_array - creates an array of chars and initializes
  *it with a specific char
  *@size: the array size
  *@c: character
  *Return: a pointer to the array por NULL if it fails
  */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
