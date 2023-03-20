#include <stdio.h>
/**
  *main - entry point
  *
  *Description: prints the alphabets except q and e
  *
  *Return: always 0 (Success)
  *
  */

int main(void)
{
	char c = 'a';
	{
		while (c <= 'z')
		{
			if (c == 'q' || c == 'e')
			{
				c++;
				continue;
			}
			putchar(c);
				c++;
		}
		putchar('\n');
		return (0);
	}
}
