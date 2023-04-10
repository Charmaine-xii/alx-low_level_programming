#include "main.h"

/**
* clear_bit - sets value of a bit to 0 at a given index
* @n: pointer of bit
* @index: index to set value of bit, starting from 0
*
* Return: If error occurs, return -1
* Otherwise, return 1
*
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);
		return (1);
}
