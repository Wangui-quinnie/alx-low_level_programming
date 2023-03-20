#include <stdio.h>
/**
  *main - entry point
  *
  *Description: print the alphabet in lowercase
  *
  *Return: always 0 (Success)
  */

int main(void)
{
	char letter = 'a';

	do {
		putchar(letter);
		letter++;

	} while (letter <= 'z');
	putchar('\n');
	return (0);
}
