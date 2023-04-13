#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *string_nconcat - concatenates two strings
  *@s1: first string to concatenate
  *@s2: second string to concatenate
  *@n: number of bytes from s2 to concatenate
  *Return: a pointer to the newly allocated space in memory
  *or NULL on failure
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, str_len, s1_len, s2_len;
	char *str;

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
	if (n >= s2_len)
		n = s2_len;
	str_len = s1_len + n + 1;
	str = malloc(sizeof(char) * str_len);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
		str[i] = s1[i];
	for (i = 0; i < n; i++)
		str[s1_len + i] = s2[i];
	str[s1_len + n] = '\0';
	return (str);
}
