#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  *print_numbers - prints numbers followed by a newline
  *@separator: the string to be printed between numbers
  *@n: number of integers passed to the function
  *Return: 0
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, num;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, unsigned int);
		printf("%d", num);

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
