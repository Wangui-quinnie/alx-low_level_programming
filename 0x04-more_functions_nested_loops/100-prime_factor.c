#include <stdio.h>

/**
  *main- entry point
  *
  *Description: prints the largest prime factor of a given number
  *Return:always 0
  */

int main(void)
{
	long int n  = 612852475143;
	long int i;

	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			n  /= i;
			i--;
		}
	}
	printf("%lu\n", i);
	return (0);
}
