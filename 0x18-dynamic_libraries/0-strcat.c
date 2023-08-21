#include "main.h"

/**
  *_strcat - appends thr src string to the dest string
  *@src: string to be appended
  *@dest: the destination string
  *Return: returns a pointer to the resulting string dest
  *
  */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
