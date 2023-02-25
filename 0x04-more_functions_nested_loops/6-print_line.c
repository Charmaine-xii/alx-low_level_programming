#include "main.h"

/**
* print_line - draws a straight line in the terminal
* @n - the number of line(_) characters to to be printed
*/
void print_line(int n)
{
	int len;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (len = 1; len <= n; len++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
}
