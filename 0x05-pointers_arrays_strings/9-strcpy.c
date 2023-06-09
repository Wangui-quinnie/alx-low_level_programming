#include "main.h"

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

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}

