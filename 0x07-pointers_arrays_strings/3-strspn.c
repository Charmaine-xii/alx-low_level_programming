#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: string
* @accept: substring
* Return: n of bytes segments s, consisting only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
				break;
			}
		}

		if (accept[j] != s[i]
		{
			break;
		}
	}
	return (count);
}
