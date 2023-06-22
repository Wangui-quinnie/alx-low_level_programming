#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  *sum_them_all - returns the sum of aall its parameters
  *@n: known parameter
  *Return: sum of all its parameters
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + (va_arg(args, unsigned int));
	}
	va_end(args);
	return (sum);
}
