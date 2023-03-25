#include "variadic_functions.h"
#include <stdio.h>

/**
* print_strings - prints strings followed by a new line
* @separator: string that will separate every arg
* @n: number of given arguments
* @...: variable number of input arguments
*
* Description: If separator is NULL, it is not printed.
* If one of the strings if NULL, (nil) is printed instead.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list string;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(string, char *);
		if (str)
			printf("%s", str);
		if (str == NULL)
			printf("(nil)");
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
