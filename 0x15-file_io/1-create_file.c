#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
  *create_file - creates a file
  *@filename: file to be created
  *@text_content: a NULL terminated string to write to the file
  *Return: 1 on success and -1 on failure
  *-1 if filename is NULL
  */

int create_file(const char *filename, char *text_content)
{
	int w, fd;
	int len = strlen(text_content);

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (text_content != NULL)
	{
		w = write(fd, text_content, len);
		close(fd);
	}
	if (w == -1 || fd == -1)
		return (-1);
	close(fd);
	return (1);
}
