#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
  *string_nconcat - concatenates two strings
  *@s1: first string to be concatenated
  *@s2: second string to be concatenated
  *@n: number of elements from s2
  *Return: a pointer to a newly allocated space in memory
  *containing s1 followwed by the first n bytes of s2
  *or NULL on failure
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1, length2, i, j, size;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	length1 = strlen(s1);
	length2 = strlen(s2);

	if (n <= length2)
	n = length2;
	size = length1 + n + 1;

	result = malloc((size) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length1; i++)
		result[i] = s1[i];
	for (j = 0; j < n; j++)
		result[i++] = s2[j];
	result[i] = '\0';
	return (result);
}
