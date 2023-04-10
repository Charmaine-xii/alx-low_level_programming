#include "main.h"

/**
* print_binary - prints binary representation of a number
* @n: number for which binary representation will be printed
*
* Return: binary code of represented number
*/
void print_binary(unsigned long int n)
{
	if (n > 1)

		print_binary(n >> 1); /*recursive call with right shift operator*/

	_putchar((n & 1) ? '1' : '0'); /*print the least significant bit*/
}
