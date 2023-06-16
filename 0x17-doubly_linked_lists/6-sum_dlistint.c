#include "lists.h"

/**
 * sum_dlistint - gives sum of all the data (n) of a dlistint_t linked list
 * @head: head of the linked list
 *
 * Return: sum of all nodes, 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
