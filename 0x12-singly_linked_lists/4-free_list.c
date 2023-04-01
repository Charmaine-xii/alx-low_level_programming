#include "lists.h"

/**
* free_list - frees a list_t list including all values inside
* @head: pointer to the head of the list to be freed
*
* Description: go through the list while head is not NULL
*				free the str element, then free the object itself
*				then assign next of that element to next of head
*				then free head after everything is done
* Return: Nothing
*/
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
