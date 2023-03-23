#include <stdio.h>
/**
  *main - entry point
  *
  *Description: prints the first 98 fibonacci numbers, starting with 1 and 2
  *Return: Always 0
  */

int main(void)
{
	int fib1 = 1;
	int fib2 = 2;
	int fib_next;
	int count = 2;

	printf("%d, %d, ", fib1, fib2);

	while (count < 98)
	{
		fib_next = fib1 + fib2;
		printf("%d, ", fib_next);
		fib1 = fib2;
		fib2 = fib_next;
		count++;
	}
	fib_next = fib1 + fib2;
	printf("%d\n", fib_next);
	return (0);
}
