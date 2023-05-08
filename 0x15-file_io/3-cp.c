#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file)
void close_file(int fd)

/**
* create_buffer - creates buffer with 1024 bytes allocated memory
* @file: name of file for which chars in buffer are being stored
*
* Return: pointer to newly allocated buffer.
*
* Description: if malloc fails, exit code 98
*/
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprint(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
* close_file - closes file descriptor
* @fd: file descriptor that will be closed
*/
void close_file(int fd)
{
	int x;

	x = close(fd);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
* main - copies one file to another
* @argc: number of arguments
* @argv: array of pointers to argument
*
* Return: 0 (successful)
*/
int main(int argc, char *argv[])
{
	int from, to, nr, nwr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2];
	from = open(argv[1], O_RDONLY);

	if (from == -1)
	{
		dprint(STDERR_FILENO,  "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}

	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (to == -1)
	{
		dprint(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buffer);
		exit(99);
	}

	while ((nr = read(from, buffer, 1024)) > 0)
	{
		nwr = write(to, buffer, nr);

		if (to == -1 || nwr == -1 )
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close_file(from);
			close_file(to);
			free(buffer);
			exit(99);
		}
	}

	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close_file(from);
		close_file(to);
		free(buffer);
		exit(98);
	}

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
