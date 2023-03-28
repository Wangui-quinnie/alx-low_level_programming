#include "main.h"
#include <stdio.h>

/**
  *_strcpy - copies the string pointed to by src, including the null byte
  *
  *@dest: a pointer to the buffer to which the string will be copied
  *
  *@src: a pointer to the string to be copied
  *
  *Return: the pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULL)
		return (NULL);
	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}

