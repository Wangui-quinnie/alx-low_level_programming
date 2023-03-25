#include "main.h"
/**
  *print_square - prints a square of size 'size'
  *@size: the size of the square to print
  *Return: always 0
  */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
