#include "main.h"

/**
* _memset - fills memory with a constant byte
* @s: the pointer
* @b: character to fill memory area
* @n: number of bytes
* Return: pointer to full memeory area @s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	/* memory / buffer = s; value = b */

	for (i = 0; i < n; i++)
	{
		s[i] = b;	/* so the pointer filled memory area b */
	}
	return (s);
}
