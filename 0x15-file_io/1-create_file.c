#include "main.h"

/**
* create_file - creates a file
* @filename: pointer to name of file to create
* @text_content: pointer to a string to write to the file
*
* Return: If function fails or filename is NULL, return -1
* Otherwise return 1 on Success
*
*/
int create_file(const char *filename, char *text_content)
{
	int f, result, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f == -1)
		return (-1);

	result = write(f, text_content, len);
	close(f);

	if (result != len)
		return (-1);

	return (1);
}
