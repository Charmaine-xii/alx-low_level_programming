#include "main.h"
/**
* print_to_98 - prints all natural numbers from n to 98
* @n: the number to start counting at
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			_putchar('%d', n);
			if (n != 98)
			{
				_putchar(',');
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			_putchar('%d', n);
			if (n != 98)
			{
				_putchar(',');
			}
			n--;
		}
	}
	else
	{
		putchar('98');
	}
	_putchar('\n');
}
