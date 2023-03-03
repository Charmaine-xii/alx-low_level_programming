i#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: input value
* @src: input value
* Return: pointer to string @dest
*/
char *_strcat(char *dest, const char *src)
{
	int b = -1, i;
	for (i = 0; dest[i] != '\0'; i++)
	;
	do {
		b++;
		dest[i] = src[b];
		i++;

	} while (src[b] != '\0');

	return (dest);
}
