#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  *print_all - prints anything
  *@format: a list of types of arguments passed to the function
  *Return: void
  */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char c;
	char *s;
	float f;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{

			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s)
					printf("%s", s);
				else
					printf("(nil)");
				break;
			default:
				break;
		}
		if (format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
