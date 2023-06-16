#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to the head element of dlistint_t list
 * @n: integer where new node will be contained
 *
 * Return: address of new element if success or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_element;

	new_element = malloc(sizeof(dlistint_t));
	if (new_element == NULL)
		return (NULL);

	new_element->n = n;
	new_element->prev = NULL;
	new_element->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_element;
	}

	*head = new_element;

	return (new_element);
}
