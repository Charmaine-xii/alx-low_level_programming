/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a linked list.
 *
 * @head: Pointer to the first node of the list.
 * @idx: Index of the list where the new node should be added (starting at 0).
 * @n: Value to be assigned to the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new_node, *current_node;
    unsigned int i;

    if (head == NULL) /* Check if the head is NULL */
        return (NULL);

    if (idx == 0) /* Add the node at the beginning of the list */
        return (add_nodeint(head, n));

    current_node = *head;
    for (i = 0; i < idx - 1 && current_node != NULL; i++)
        current_node = current_node->next;

    if (i != idx - 1 || current_node == NULL) /* Check if the index is out of bounds */
        return (NULL);

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL) /* Check if malloc failed */
        return (NULL);

    new_node->n = n;
    new_node->next = current_node->next;
    current_node->next = new_node;

    return (new_node);
}
