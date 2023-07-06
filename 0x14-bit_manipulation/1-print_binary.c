#include <stdio.h>
#include "main.h"

/**
  *print_binary - prints the binary representation of a number
  *@n: the number
  *Return: 0
  */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int i, count = 0;

	for (i = 63; i >= 0; i--)
	{
		temp = n >> i;

		if (temp & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (n == 0)
		_putchar('0');
}
