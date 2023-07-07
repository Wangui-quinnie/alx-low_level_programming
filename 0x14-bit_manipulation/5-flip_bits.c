#include <stdio.h>
#include "main.h"

/**
  *flip_bits - returns the number of bits you would need to flip
  *to get from one number to another
  *@n: is first number
  *@m: the second number
  *Return: returns the number of bits you would need to flip
  *to get from one number to another
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_temp = n ^ m;
	unsigned int count = 0;

	while (xor_temp != 0)
	{
		count += xor_temp & 1;
		xor_temp >>= 1;
	}
	return (count);
}
