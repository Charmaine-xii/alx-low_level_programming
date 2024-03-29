#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * in dlistint_t list.
 *
 * @h: Pointer to the first node of the list.
 * @idx: Index of the list where the new node should be added (starting at 0).
 * @n: Value to be assigned to the new node.
 *
 * Return: address of the new Node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;

	return (new);
}
