#include "main.h"

/**
  *print_numbers - print the numbers from 0 to 9
  *
  *Return: always 0
  */

void print_numbers(void)
{
	char c;

	for (c = 0; c < 10; c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
}
