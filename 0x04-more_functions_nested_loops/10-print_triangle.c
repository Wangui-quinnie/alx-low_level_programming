#include "main.h"
/**
  *print_triangle - prints a triangle of size size
  *@size: size of the triangle
  *Return: Always 0
  */

void print_triangle(int size)
{
	int row, col;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			if (col < size - row - 1)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
