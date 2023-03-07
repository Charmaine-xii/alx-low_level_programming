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

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}

	return (NULL)
}
