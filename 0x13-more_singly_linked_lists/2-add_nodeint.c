#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - function to add node to list.
 *Description: Function that adds a new node at the beginning of listint_t list
 * @head: pointer to a pointer
 * @n: constant integer value in the structure
 * Return: the address of the new element or NULL if fail (the newN)
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newN;

	newN = malloc(sizeof(listint_t));

	if (newN == NULL)
	{
		free(newN);
		return (NULL);
	}

	newN->n = n;

	newN->next = *head;

	*head = newN;

	return (newN);
}
