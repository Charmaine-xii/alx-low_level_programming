#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - allocates memory using malloc
* @b: size of bytes to allocate
*
* Return: pointer to allocated memory (Successful), otherwise 98 (Failed)
*/
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
		exit(98);

	else
		return (mem);
}
