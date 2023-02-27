#include "main.h"

/**
* _strlen - returns the length of a string
* @s: string to get the length of
* Return: length of *s
*/
int _strlen(char *s)
{
	int slth = 0;

	while (*s != '\0')
	{
		slth++;
		s++;
	}

	return (slth);

}
