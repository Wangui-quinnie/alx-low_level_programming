#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _strdup - copies the string given as a parameter
  * @str: string to be copied
  * Return: a pointer to the duplicated string
  * and NULL on failure
  */

char *_strdup(char *str)
{
	char *s;
	int i, str_len;

	if (str == NULL)
		return (NULL);
	str_len = 0;
	while (str[str_len] != '\0')
		str_len++;
	s = malloc(sizeof(char) * (str_len + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i <= str_len; i++)
		s[i] = str[i];
	return (s);
}
