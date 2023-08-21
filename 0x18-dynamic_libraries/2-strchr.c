#include "main.h"
#include <stdio.h>

/**
  *_strchr - locates a character in a string
  *@s: the string to check
  *@c: the character to locate
  *Return: a pointer to the first occurence of c
  */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
