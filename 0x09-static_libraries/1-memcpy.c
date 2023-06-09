#include "main.h"

/**
  *_memcpy - copies memory area
  *@n: number of bytes copied from src to dest
  *@src: memory area to be copied from
  *@dest: memory area to be copied to
  *Return: a pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *char_dest = (char *) dest;
	char *char_src = (char *) src;

	for (i = 0; i < n; i++)
		char_dest[i] = char_src[i];
	return (dest);
}
