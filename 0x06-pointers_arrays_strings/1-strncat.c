#include "main.h"

/**
  *_strncat - concatenates two strings
  *@src: the source string which will be appended
  *@dest: the destination array where the content is to be appended to
  *@n: number of bytes to be appended from src
  *Return: returns a pointer to the resulting string dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int j = 0;
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[i] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
