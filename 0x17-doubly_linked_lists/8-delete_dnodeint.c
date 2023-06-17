#include "lists.h"

/**
 * delete_dnodeint_at_index
 * @head: pointer to pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if succeeded, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current, *prev;
unsigned int i;

if (*head == NULL)
return (-1);

current = *head;
prev = NULL;
for (i = 0; i < index && current != NULL; i++)
{
prev = current;
current = current->next;
}

if (current == NULL)
return (-1);

if (prev == NULL)
*head = current->next;
else
prev->next = current->next;

if (current->next != NULL)
current->next->prev = prev;

free(current);
return (1);
}

