#include "lists.h"

/**
* free_listint_safe - Frees a listint_t linked list safely.
* @head: A pointer to the pointer to the head of the list.
*
* Return: The size of the list that was freed.
*/
size_t free_listint_safe(listint_t **head)
{
listint_t *current, *next;
size_t count = 0;

current = *head;
while (current != NULL)
{
next = current->next;
free(current);
count++;

if (next >= current)
{
*head = NULL;
break;
}

current = next;
}

*head = NULL;

return (count);
}
