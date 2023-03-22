#include "function_pointers.h"
#include <stdlib.h>
/**
* int_index - searches for an integer
* @array: the array of integers
* @size: size of the array
* @cmp: pointer to function to be used to compare values
*
* Return: if no element matches, return -1
* if size <=, return -1
* otherwise - return integer number showing element matches
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL || cmp != NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) > 0)
			return (i);
	}

	return (-1);
}
