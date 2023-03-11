#include "main.h"

/**
* _strchr - locates a character in a string
* @s: string in which character will be located
* @c: character to be located
* Return: pointer to first occurence of @c in string @s,
*	 NULL if character not found
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);

	}

	return (0);
}
