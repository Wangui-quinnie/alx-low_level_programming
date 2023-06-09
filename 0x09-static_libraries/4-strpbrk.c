#include "main.h"
#include <stdio.h>

/**
  *_strpbrk - searches astring for any of a set of bytes
  *@s: the string to search
  *@accept: the bytes to search for
  *Return: a pointer to the first a in the string
  */

char *_strpbrk(char *s, char *accept)
{
	char *temp;

	while (*s != '\0')
	{
		temp = accept;
		while (*temp != '\0')
		{
			if (*s == *temp)
			{
				return ((char *)s);
			}
			temp++;
		}
		s++;
	}
	return (NULL);
}
