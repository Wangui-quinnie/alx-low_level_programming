#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  *print_all - prints anything
  *@format: a list of types of arguments passed to the function
  *Return: 0
  */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char c, *s;
	float f;

	va_start(args, format);
	while (format && format[i])
	{
		if (i > 0)
		printf(", ");

		switch (format[i])
		{
			case 's':
				s = va_arg(args, char *);
				if (s != NULL)
					printf("%s", s);
				if (s == NULL)
					printf("(nil)");
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 'c':
				c = (char) va_arg(args, int);
				printf("%c", c);
				break;
			default:
				break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
