#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 *
 * @h: Head node of the doubly linked list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *temp = h;
size_t count = 0;

while (temp != NULL)
{
printf("%d\n", temp->n);
temp = temp->next;
count++;
}
return (count);
}

