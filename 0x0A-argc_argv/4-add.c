#include <stdio.h>
#include <stdlib.h>

/**
  *main - adds positive numbers
  *@argc: argument count
  *@argv: argument vector
  *Return: Always 0
  */

int main(int argc, char *argv[])
{
	int i, add = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	if ((argc >= 'a') && (argc <= 'z'))
	{
		printf("Error\n");
		return (1);
	}
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			add = add + atoi(argv[i]);
		}
		printf("%d\n", add);
	}
	return (0);
}
