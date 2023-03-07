#include "main.h"

/**
* _memcpy - copies memory area
* @dest:pointer to destination of memory area to be copied into
* @src: pointer to source of memory area to be copied from
* @n: number of bytes
* Return: pointer to @dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i] /* destination = source of memory area */
	}

	return (dest);
}
