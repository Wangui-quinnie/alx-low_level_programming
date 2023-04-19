#include <stdio.h>

/**
  *main - prints the name of the file it was compiled from
  *followed by a newline
  *Return: 0
  */

int main()
{
	printf("%s\n", _FILE_);
	return (0);
}
