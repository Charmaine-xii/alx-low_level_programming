#include "lists.h"

/**
 * list_len - returns number of elements in a linked dlistint_t list
 * @h: pointer to the first element of a linked dlistint_t list
 *
 * Return: number of counted elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
