#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a string followed by a newline
 * @s: string to be printed
 * return: always 0
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar('\n');
		_putchar(*s);
		_puts_recursion(s + 1);
	}

}
