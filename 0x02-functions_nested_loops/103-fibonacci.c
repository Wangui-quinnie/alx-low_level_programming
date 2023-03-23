#include <stdio.h>
/**
  *main - entry point
  *
  *Description: prints the sum of the even-valued terms
  *
  *Return: Always 0
  */

int main(void)
{
	int prev = 1, curr = 2, next;
	long sum = 2;

	while (curr <= 4000000)
	{
		next = prev + curr;
		prev = curr;
		curr = next;

		if (curr % 2 == 0)
		{
			sum += curr;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
