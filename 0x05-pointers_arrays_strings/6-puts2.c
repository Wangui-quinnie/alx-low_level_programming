#include "main.h"

/**
  *puts2 - prints every other character of a string starting with the first
  *
  *@str: pointer to input string
  *
  *Return: 0
  */

void puts2(char *str)
{
	int i;
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
