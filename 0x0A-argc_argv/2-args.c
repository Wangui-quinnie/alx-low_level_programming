#include <stdio.h>

/**
  *main - print all arguments it receives
  *@argc: the argument count
  *@argv: the argument vector
  *Return: 0
  */

int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
