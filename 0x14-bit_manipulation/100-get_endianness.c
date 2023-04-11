#include "main.h"

/**
* get_endianness - checks the endianness
*
* Return: If big endian, return 0.
* If little endian, return 1.
*
*/
int get_endianness(void)
{
	int x = 1;
	char *c = (char *)&x;

	if (*c == 1)
		return (1);

	return (0);
}
