#include "main.h"

/**
* _print_rev_recursion - prints string in reverse
* @s: string to be printed in reverse
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1); /* we first reverse the string */
		_putchar(*s);		/* we print after reversing */
	}
}
