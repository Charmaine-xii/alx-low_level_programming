#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers from min to max (Included)
* @min: minimum number of range
* @max: maximum number
*
* Return: pointer to array, NULL if failed/erroneous input
*/

int *array_range(int min, int max)
{
	int i, *narr;


	if (min > max)
		return (NULL);

	narr = malloc((max - min + 1) * sizeof(int));

	if (narr == NULL)
		return (NULL);
	for (i = 0; i <= max - min; i++)
	{
		narr[i] = min + i;
	}
	return (narr);
}
