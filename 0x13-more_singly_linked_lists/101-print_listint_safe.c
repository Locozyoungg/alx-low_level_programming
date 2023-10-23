#include "lists.h"

/**
* print_listint_safe - Prints a listint_t linked list safely.
* @head: A pointer to the head of the list.
*
* Return: The number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *tortoise = head, *hare = head;
size_t count = 0;

while (hare != NULL && hare->next != NULL)
{
hare = hare->next->next;
tortoise = tortoise->next;
count++;

printf("[%p] %d\n", (void *)tortoise, tortoise->n);

if (hare == tortoise)
{
printf("-> [%p] %d\n", (void *)hare, hare->n);
break;
}
}

return (count);
}
