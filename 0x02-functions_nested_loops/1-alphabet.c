#include "main.h"
/**
  *main - function that prints the alphabet in lowercase
  *
  *Return: Always 0
  */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}

