#include "main.h"

/**
* append_text_to_file - appends the text at the end of a file
* @filename: pointer to name of file
* @text_content: pointer to string that will be added at end of file
*
* Return: If function fails or filename is NULL, return -1
* If file does not exist or user lacks permission to write, return -1
* Otherwise on suceess and if file exists, return 1
*
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int f, result, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);

	result = write(f, text_content, len);
	if (result == -1)
	{
		close(f);
		return (-1);
	}

	close(f);
	return (1);

}
