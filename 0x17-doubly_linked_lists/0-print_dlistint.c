#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t
 * @h: pointer to the first element of dlistint_t
 *
 * Return: The number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
