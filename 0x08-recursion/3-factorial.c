#include "main.h"

/**
* factorial - returns the factorial of a given number
* @n: number to find factorial of
*
* Return: if n > 1, factorial of n
*	  if n < 0, - 1 to indicate error.
*/
int factorial(int n)
{
	if (n > 1)
	{
		return (n * factorial(n - 1));
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (1);
}
