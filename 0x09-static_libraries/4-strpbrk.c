#include "main.h"

/**
* _strpbrk - searches a string for any of a set of bytes
* @s: string to be searched
* @accept: second string
* Return: pointer to byte @s accept, NULL no byte found
*/
char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
