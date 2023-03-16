#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates memory for an array of @nmemb elements of @size size
* @nmemb: number of members in the array
* @size: byte size of every element
*
* Return: pointer to array, NULL if failed
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *narr;

	if (size == 0 || nmemb == 0)
		return (NULL);

	narr = malloc((size) * (nmemb));

	if (narr == NULL)
		return (NULL);
	for (i = 0; i < size * nmemb; i++)
	{
		narr[i] = '\0';
	}
	return (narr);
}
