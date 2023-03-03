#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: input value
* @src: input value
* Return: pointer to string @dest
*/
char *_strcat(char *dest, const char *src)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0')
		a++;
	{
	}

	for (b = 0; src[b])
		 a++;
		b++;
	{
		dest[a] = src[b];
	}
	dest[a] = '\0';

	return (dest);
}
