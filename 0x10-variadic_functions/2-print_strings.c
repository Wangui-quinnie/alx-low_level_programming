#include "variadic_functions.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>


/**
  *print_strings - print strings followed by a new line
  *@separator: the string to be printed between strings
  *@n: the number of strings passed to the function
  *@...: variable arguments list of strings to be printed
  *Return: void
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s)
		{
			printf("%s", s);
		}
		else
		{
			printf("(nil)");
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
