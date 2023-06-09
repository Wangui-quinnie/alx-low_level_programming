#include <stdio.h>
#include <stddef.h>
#include "main.h"

/**
  *_strstr - locates a substring
  *@haystack: the string to find the substring
  *@needle: the substring to be located
  *Return: a pointer to the beginning of the located
  *substring or NULL if substring is not found
  */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *str = haystack;
		char *substr = needle;

		while (*str == *substr && *str != '\0')
		{
			substr++;
			str++;
		}
		if (*substr == '\0')
			return (haystack);
		{
			haystack++;
		}
	}
	return (NULL);
}
