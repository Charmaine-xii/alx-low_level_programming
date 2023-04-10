#include "main.h"

/**
* get_bit - returns the value of a bit at a given index
* @n: The bit
* @index: index to get value at, starting from 0 of the bit
*
* Return: if error occurs, return -1,
* Otherwise return value of bit at index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
