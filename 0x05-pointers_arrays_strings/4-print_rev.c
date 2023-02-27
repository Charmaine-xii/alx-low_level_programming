#include "main.h"

/**
* print_rev - prints a string in reverse
* @s: the string to be printed
*/
void print_rev(char *s)
{
	int slth = 0;
	int i;

	while (s[i++])
		i++;

	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
