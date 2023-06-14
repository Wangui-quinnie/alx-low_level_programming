#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  *_strdup - returns a pointer to the duplicated string
  *@str: the string
  *Return: pointer to the duplicated string or NULL on failure
  */

char *_strdup(char *str)
{
	char *s;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}
	s[len] = '\0';
	return (s);
}
