#include "main.h"

/**
* _strcat - concatenates two strings
* @src: source string to be appended
* @dest: string to be concatenated
* Return: pointer to the resulting string @dest
*/
char *_strcat(char *dest, const char *src)
{
	int i;
	int n;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (n = 0; (dest[i + n] = *src++) != '\0'; n++)
	{
	}

	return (dest);
}
