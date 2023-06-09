#include "main.h"

/**
  *_strncpy - copies a string
  *@n: number of characters to be copied from src to dest
  *@src: the string to be copied
  *@dest: the destination array where the content is being copied
  *Return: returns a pointer to the resulting string dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n  && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
