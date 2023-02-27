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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
