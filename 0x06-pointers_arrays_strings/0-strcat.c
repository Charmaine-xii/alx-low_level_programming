#include "main.h"

/**
* _strcat - concatenates two strings
* @src: source string to be appended
* @dest: string to be concatenated
* Return: pointer to the resulting string @dest
*/
char *strcat(char *dest, const char *src)
{

	int i;
	int n;

	i = 0
	while (dest[i] != '\0')
	{
		i++;
	}

	n = 0
	while (src[n] != '\0')
	{
		dest[i] = src[n];
		i++;
		n++;
	}

	dest[i] = '\0';
	return (dest);
}
