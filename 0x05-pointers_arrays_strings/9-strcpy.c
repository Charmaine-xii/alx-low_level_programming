#include "main.h"

/**
* *_strcpy - copies string pointed to by @src,
*	including the terminating null byte (\0),
*	to the buffer pointed by @dest.
* @src: source of string to vopy
* @dest: buffer to copy string to
* Return: pointer to destination of string @dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		i++;
	}
	for (; x < 1; x++)
	{
		dest[x] = src[x];
	}
	dest[i] = '\n';

	return (dest);
}
