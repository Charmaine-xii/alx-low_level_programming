#include "main.h"

/**
* print_rev - prints a string in reverse
* @s: the string to be printed
*/
void print_rev(char *s)
{
	int slth = 0;
	int i;

	while (*s != '\0')
	{
		slth++;
		s++;
	}
	s--;
	for (i = slth - 1; i >= 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
