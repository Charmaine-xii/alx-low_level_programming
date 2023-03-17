#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size in bytes of the allocated space for ptr.
 * @new_size: The size in bytes for the new memory block.
 *
 * Return: If new_size == old_size - ptr.
 *         If new_size == 0 and ptr is not NULL - NULL.
 *         Otherwise - a pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	char *ptr_copy, *filler;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
			return (NULL);

		return (new_ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_copy = ptr;
	new_ptr = malloc(sizeof(*ptr_copy) * new_size);

	if (new_ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	filler = new_ptr;

	for (i = 0; i < old_size && i < new_size; i++)
		filler[i] = *ptr_copy++;

	free(ptr);
	return (new_ptr);
}
