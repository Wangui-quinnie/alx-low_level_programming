#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
  *print_strings - prints strings followed by a new line
  *@separator: the string to be printed between strings
  *@n: the number of strings passed to the function
  *Return: 0
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char*);
		printf("%s", s);

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
		if (s == NULL)
			printf("(nil)");
	}
	printf("\n");
	va_end(args);
}
