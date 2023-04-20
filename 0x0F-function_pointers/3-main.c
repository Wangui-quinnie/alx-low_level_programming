#include "3-calc.h"

/**
  *main - performs simple operations
  *@argc: argument count
  *@argv: argument vector
  *Return: 0
  */
int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	char op;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	f = get_op_func(argv[2]);
	if (!f)
	{
		printf("Error\n");
		exit(99);
	}
	op = *argv[2];
	if ((op == '/' || op == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = f(arg1, arg2);
	printf("%d\n", result);
	return (0);
}
