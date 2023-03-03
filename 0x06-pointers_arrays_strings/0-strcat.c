#include "main.h"

/**
* _strcat - concatenates two strings
* @src: source string to be appended
* @dest: string to be concatenated
* Return: pointer to the resulting string @dest
*/
char *_strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
