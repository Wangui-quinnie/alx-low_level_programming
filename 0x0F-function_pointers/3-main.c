#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"


/**
  *main - entry point
  *@argc: argument count
  *@argv: argumnt vector
  *Return: 0
  */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if (num2 == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	result = (*get_op_func(argv[2]))(num1, num2);
	printf("%d\n", result);
	return (0);
}
