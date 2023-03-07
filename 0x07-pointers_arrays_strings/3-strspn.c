#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: string
* @accept: substring
* Return: n of bytes segments s, consisting only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, n, j;
	unsigned int cnt;

	count = 0;

	n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				cnt++;
				n = 1;
				break;
			}
		}
		if (n != 0)
			n = 0;
		else
			break;
	}
	return (count);
}

