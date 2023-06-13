#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
  *str_concat - concatenates two strings
  *@s1: string to be concatenated
  *@s2: string to be concatenated
  *Return: pointer to a newly allocated space in memory
  *that contains the contents os s1 and s2
  */

char *str_concat(char *s1, char *s2)
{
	int i;
	char *s;
	int s1_length = strlen(s1);
	int s2_length = strlen(s2);
	int size = s1_length + s2_length + 1;

	s = malloc(sizeof(char) * (s1_length + s2_length +1));

	if (s == NULL)
		return (NULL);
	for (i = 0; i < s1_length; i++)
		s[i] = s1[i];
	for (i = 0; i < s2_length; i++)
		s[s1_length + i] = s2[i];
	s[size - 1] = '\0';
	return (s);
}
