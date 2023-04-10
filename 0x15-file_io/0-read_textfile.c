#include "main.h"

/**
* read_textfile - reads text file and prints it to the POSIX standard output
* @filename: name of file to be read
* @letters: the number of letters to read and print
*
* Return: actual number of letters read and printed.
* If error occurs, return 0
*
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f, nread, nwritten;
	char *buffer;


	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		free(buffer);
		return (0);
	}

	nread = read(f, buffer, letters);
	if (nread == -1)
	{
		free(buffer);
		close(f);
		return (0);
	}

	nwritten = write(STDOUT_FILENO, buffer, nread);
	if (nwritten == -1 || (size_t)nwritten != (size_t)nread)
	{
		free(buffer);
		close(f);
		return (0);
	}

	free(buffer);
	close(f);
	return (nwritten);
}
