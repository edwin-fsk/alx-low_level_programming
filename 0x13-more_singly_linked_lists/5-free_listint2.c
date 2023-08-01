#include "lists.h"
/**
 * free_listint2 - free list.
 *Description: frees a list_t list
 * @head: pointer to a pointer
 * Return: void.
 **/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	temp = *head;

while (temp)
{
	temp = temp->next;
	free(*head);
	*head = temp;
}
	*head = NULL;

}
