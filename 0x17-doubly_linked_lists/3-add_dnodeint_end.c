#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to the head element in dlistint_t list
 * @n: integer where new node will be contained
 *
 * Return: address of new element if success or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_element, *last;

	new_element = malloc(sizeof(dlistint_t));
	if (new_element == NULL)
		return (NULL);

	new_element->n = n;
	new_element->prev = NULL;

	if (*head == NULL)
	{
		new_element->prev = NULL;
		*head = new_element;
		return (new_element);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = new_element;
	new_element->prev = last;

	return (new_element);
}
