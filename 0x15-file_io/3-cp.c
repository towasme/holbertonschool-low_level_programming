#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>

/**
 *main - program that reads a file
 *@ac: number of arguments
 *@av: argumnets
 *Return: On success 1.
 */

int main(int ac, char *av[])
{
	char buff[1024];
	int fd, fa, fb, n_b;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(av[1], O_RDONLY, 0600);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fa = open(av[2], O_RDWR | O_TRUNC | O_CREAT, 0664);
	if (fa == -1)
	{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99); }
	while ((n_b = read(fd, buff, 1024)) > 0)
	{
		fb = write(fa, buff, n_b);
		if (fb == -1)
		{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99); }
	}
	if (n_b == -1)
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98); }
	if (close(fd) == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100); }
	if (close(fa) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fa);
		exit(100);
	}
	return (0);
}
