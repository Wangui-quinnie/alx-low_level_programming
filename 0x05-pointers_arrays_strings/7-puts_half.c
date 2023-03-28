#include "main.h"

/**
  *puts_half - prints the second half of a string followed by a new line
  *
  *@str: pointer to a string
  *Return: 0
  */

void puts_half(char *str)
{
	int length = 0;
	int i, n;

	for (i = 0; str[i] != '\0'; i++)
		length++;
	if (length % 2 == 0)
	{
		n = length / 2;
	}
	else
	{
		n = (length - 1) / 2;
	}
	for (i = n; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
