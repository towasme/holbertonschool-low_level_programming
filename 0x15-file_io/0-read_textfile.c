#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>

/**
 *read_textfile - program that reads a file
 *@filename: The character to print
 *@letters: number of letters it prints
 *Return: On success 1.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t fd_write, n_bytes;
	
	if (filename == NULL)
	{
		return (0);
	}
	else
	{
		fd = open(filename, O_RDONLY);
		if (fd == -1)
		{
			return (0);
		}
	}
	buff = malloc(sizeof(size_t) * letters);
	if (buff == NULL)
		return (0);

	n_bytes = read(fd, buff, letters);
	if (n_bytes == -1)
	{
		return (0);
	}
	else
	{
		fd_write = write(STDIN_FILENO, buff, n_bytes);
		if (fd_write == -1)
		{
			return (0);
		}
	}
	return (fd_write);
}
