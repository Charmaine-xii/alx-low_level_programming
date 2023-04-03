#include "lists.h"

/**
* listint_len - returns the number of elements in linked list
* @h: linked list of listint_t type
*
* Description: cycles through linked list till next points to null
* while add counter variable
*
* Return: number of elements counted
*/
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);

}
