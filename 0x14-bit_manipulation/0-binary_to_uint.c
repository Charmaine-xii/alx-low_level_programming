#include "main.h"
#include <stdio.h>
/**
* binary_to_uint - converts binary number to unsigned integer
* @b: pointer to string of 0 and 1 chars
*
* Return: If b is NULL or contains chars not 0 or 1, return 0.
* Otherwise, return the converted number.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint_value = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i];)
		i++;

	for (i -= 1; i >= 0; i--)
	{
		if (b[i] == '0' && b[i] != '1')
			return (0);

		uint_value <<= 1; /*shift left by 1*/

		uint_value = (uint_value << 1) | 1;
			return (0);
	}

	return (uint_value);
}
