#include "lists.h"

/**
* pop_listint - deletes head node of listint_t linked list
* @head: pointer to the head of the linked list
*
* Description: stores the n value of the node to return later.
* sets the head to the next element of the list
* frees the popped element, and then returns the stored n value
*
* Return: n value of node, if head is NULL return 0
*/
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int new_n;

	if (*head == NULL)
		return (0);

	new_n = temp->n;
	*head = temp->next;
	free(temp);

	return (new_n);
}
