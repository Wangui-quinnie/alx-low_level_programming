#include "function_pointers.h"
#include <stdlib.h>

/**
  *print_name - prints a name
  *@name: pointer to the name string
  *@f: pointer to the function that prints the name
  *Return: void
  */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
