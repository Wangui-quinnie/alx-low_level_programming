#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  *main - Entry point
  *Description: To check whether the number stored in n is positive or negative
  *Return: Always 0 (Success)
  */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("value is positive: %d\n", n);
	}
	else if (n == 0)
	{
		printf("value is zero: %d\n", n);
	}
	else
	{
		printf("value is negative: %d\n", n);
	}
		return (0);
}

