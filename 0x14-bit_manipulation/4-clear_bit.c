#include <stdio.h>
#include "main.h"

/**
  *clear_bit - sets the value of a bit to 0 at a given index
  *@index: the index, starting from 0 of the bit you want to set
  *@n: pointer to the number
  *Return: 1 on success and -1 if an error occured
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
