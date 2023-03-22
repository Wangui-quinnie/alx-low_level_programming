#include "main.h"
/**
  *print_times_table - prints the n times table, starting with 0
  *@n: the highest value to print in the times table
  *Return: Always 0
  */

void print_times_table(int n)
{
	int i, j, result;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
		result = i * j;

		if (result < 10)
		{
			if (j != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			}
			_putchar(result + '0');
		}
		else if (result < 100)
		{
			if (j != 0)
				_putchar(' ');

			_putchar(result / 10 + '0');
			_putchar(result % 10 + '0');
		}
		else
		{
			_putchar(result / 100 + '0');
			_putchar((result / 10) % 10 + '0');
			_putchar(result % 10 + '0');
		}
		if (j != n)
		{
			_putchar(',');
			_putchar(' ');
		}
		}
		_putchar('\n');
	}
}


