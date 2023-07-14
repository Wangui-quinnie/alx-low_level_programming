#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>

/**
  *read_textfile - reads a tset file and prints it to the POSIX std output
  *@filename: pointer to the name of the file
  *@letters: number of letters it should read and print
  *Return: actual number of letters it could read and print
  *0 if filename is NULL
  *0 if the file cannot be opened or read
  *0 if wrire fails or it does nit return the expected amount of bytes
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, w, fd;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	r = read(fd, buffer, letters);
	if (r == -1)
	{
		close(fd);
		return (0);
	}
	w = write(STDOUT_FILENO, buffer, r);
	close(fd);
	if (w == -1 || w != r)
	{
		return (0);
	}
	else
		return (w);
}
