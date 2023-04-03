#include "lists.h"

/**
* free_listint - frees a listint_t list including all values inside
* @head: pointer to the head of the list to be freed
*
* Description: go through the list while head is not NULL
*				free the integer element, then free the object itself
*				then assign next of that element to next of head
*				then free head after everything is done
* Return: Nothing
*/
void free_listint(listint_t *head)
{
	listint_t *temp = head, *temp_2;

	while (head)
	{
		temp_2 = temp;
		temp = temp->next;
		free(temp_2);
	}
}
