#include "main.h"

/**
  *string_toupper - changes all lowercase letters of a string to uppercase
  *
  *@str: pointer to the string to be modified
  *Return: pointer to the modified string
  */

char *string_toupper(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] >= 122)
			str[i] = str[i] - 32;
	}
	return (str);
}
