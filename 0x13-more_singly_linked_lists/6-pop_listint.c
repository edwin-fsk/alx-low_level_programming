#include "lists.h"
/**
 * pop_listint - function to delete the head node.
 *Description: Function that deletes the head of node of a listint.
 * @head: pointer to a pointer
 * Return: the head nodes data (n) if linked list empty return 0
 **/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int nodeData;

	if (*head == NULL)
		return (0);

	temp = (*head)->next;
	nodeData = (*head)->n;

	free(*head);
	*head = temp;

	return (nodeData);
}
