#include "lists.h"

/**
* free_dlistint_t - frees a dlistint_t list including all values inside
* @head: pointer to the head of the list to be freed
*
* Return: Nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
