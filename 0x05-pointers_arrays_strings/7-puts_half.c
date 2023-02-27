#include "main.h"

/**
* puts_half - prints half of a string
* @str: string from which half will be printed
*/
void puts_half(char *str)
{
	int i = 0;
	int slth = 0;
	int n;

	while (str[i++])
		slth++;

	if ((slth % 2) == 0)
		n = slth / 2;

	else
		n = (slth + 1) / 2;

	for (i = n; i < slth; i++)
		_putchar(str[i]);

	_putchar('\n');
}
