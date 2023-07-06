#include <stdio.h>
#include "main.h"

/**
  *get_bit - returns the value of a bit at a given index
  *@index: the index of the bit you want starting from 0
  *@n: number to search
  *Return: the value of the bit at index or -1 if an error occured
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;

	return (value);
}
