#include <stdio.h>
#include <stdlib.h>

/**
  *main - a function that multiplies two numbers
  *@argc: the argument count
  *@argv: the argument vector
  *Return: error if it does not receive two arguments followed by
  *a new line and return 1
  */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
