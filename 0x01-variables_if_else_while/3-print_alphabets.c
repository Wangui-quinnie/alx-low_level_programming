#include <stdio.h>
/**
  *main - entry point
  *
  *Description: print alphabets in lowercase and uppercase
  *
  *Return: always 0
  */

int main(void)
{
	char c = 'a';
	char d = 'A';

	while (c <= 'z'){
		putchar(c);
		c++;
	}
	while (d <= 'Z'){
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
