#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);


/**
  *op_add - calculates the sum of two integers
  *@a: first integer
  *@b: second integer
  *Return: the sum of a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  *op_sub - calculates the diffrerence of two integers
  *@a: first integer
  *@b: second integer
  *Return: the difference of a and b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  *op_mul - multiplies two integers
  *@a: first integer
  *@b: second integer
  *Return: the product of a and b
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  *op_div - divides two integers
  *@a: first integer
  *@b: second integer
  *Return: the result of the division
  */
int op_div(int a, int b)
{
	return (a / b);
}

/**
  *op_mod - calculates the remainder of the division of two integers
  *@a: the first integer
  *@b: the second integer
  *Return: the remainder of the division
  */
int op_mod(int a, int b)
{
	return (a % b);
}

