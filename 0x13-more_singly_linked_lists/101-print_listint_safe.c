#include "lists.h"

/**
 * print_listint_safe - prints safe version of listint_t
 * @head: pointer to first node in list
 * 
 * Return: number of nodes in the list 
 */

 size_t print_listint_safe(const listint_t *head)
 {
    const listint_t *slow = head, *fast = head;
    size_t count = 0;

    while (slow != NULL && fast != NULL && fast->next != NULL)
    {
        printf("[%p] %d\n", (void *)slow, slow->n);
        slow = slow->next;
        fast = fast->next->next;
        count++;

        if (slow == fast)
        {
            printf("[%p] %d\n", (void *)slow, slow->n);
            printf("-> [%p] %d\n", (void *)fast->next,fast->next->n);
            exit(98);
        }
    }

 while (slow != NULL)
 {
    printf("[%p] %d\n", (void *)slow, slow->n);
    slow = slow->next;
    count++;
 }

 return (count);

}