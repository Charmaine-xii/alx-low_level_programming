#include "lists.h"


listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL, *next_node = NULL, *current_node = *head;

	if (*head == NULL || head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	while (*head)
	{
		next_node = current_node->next;
		current_node->next = prev_node;
		prev_node = current_node;
		current_node = next_node;
	}

	*head = prev_node;
	return (*head);
}

