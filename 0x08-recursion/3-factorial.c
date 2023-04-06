#include "main.h"

/**
  *factorial - returns the factorial of a given number
  *@n: number whose factorial is to be returned
  *Return: factorial of a given number else
  *-1 if n is lower than 0
  */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
