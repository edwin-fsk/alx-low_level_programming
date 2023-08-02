#include "lists.h"
/**
 * reverse_listint - Reverse a list
 * @head: the head of list
 * Description: the function reverse linked list
 * Return: head of the list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *holder, *actual;

if (*head == NULL)
{
return (NULL);
}

actual = *head;

while (actual->next != NULL)
{
holder = actual->next;
actual->next = holder->next;
holder->next = *head;
*head = holder;
}
return (*head);
}
