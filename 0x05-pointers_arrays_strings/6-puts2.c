#include "main.h"

/**
* puts2 - prints every other character of string, starting with first char
* @str: string containing characters
*/
void puts2(char *str)
{
	int i = 0;
	int slth = 0;

	while (str[i++])
		slth++;

	for (i = 0; i < slth; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
