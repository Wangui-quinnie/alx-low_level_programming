#include "main.h"

/**
  *print_rev - prints a string in reverse followed by a new line
  *@s: pointer to the string to be printed in reverse
  *Return: 0
  */

void print_rev(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
		length++;
	for (i = length; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
