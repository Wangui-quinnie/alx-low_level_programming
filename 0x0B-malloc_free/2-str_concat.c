#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - concatenates two strings
  * @s1: first string to concatenate
  * @s2: second string to concatenate
  * Return: pointer to a newly allocated space in memory
  * NULL on failure
  */

char *str_concat(char *s1, char *s2)
{
	int i, size, s1_len, s2_len;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_len = 0;
	while (s1[s1_len] != '\0')
		s1_len++;
	s2_len = 0;
	while (s2[s2_len] != '\0')
		s2_len++;
	size = s1_len + s2_len + 1;
	s = malloc((s1_len + s2_len + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
		s[i] = s1[i];
	for (i = 0; i < s2_len; i++)
		s[s1_len + i] = s2[i];
	s[size - 1] = '\0';
	return (s);
}
