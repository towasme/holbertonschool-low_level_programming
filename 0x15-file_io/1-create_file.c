#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>

int _strlen(char *s);
/**
 *_strlen- Prints
 *@s: var
 *Return: Always
 */
int _strlen(char *s)
{
int n;

	for (n = 0; s[n]; n++)
		{
		}
	return (n);
}


/**
 *create_file - program that reads a file
 *@filename: The character to print
 *@text_content: number of letters it prints
 *Return: On success 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (!fd)
	{
		return (-1);
	}
	if (!text_content)
	{
		return (1);
	}
	if (text_content)
	{
		write(fd, text_content, _strlen(text_content));
	}
	close(fd);
	return (1);
}
