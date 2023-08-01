#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - adds node to list.
 *Description: Function that adds a new node at the end of a list
 * @head: pointer to a pointer
 * @n: integer value in the structure
 * Return: the address of the new element or NULL if fail (the nodeNew)
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nodeNew;

	if (((*head) == NULL) || ((*head)->next == NULL))
	{
		nodeNew = malloc(sizeof(listint_t));

		if (nodeNew == NULL)
		{
			free(nodeNew);
			return (NULL);
		}
		nodeNew->n = n;
		nodeNew->next = NULL;

		if (*head == NULL)
			*head = nodeNew;
		else
			(*head)->next = nodeNew;

		return (nodeNew);
	}

	return (add_nodeint_end(&(*head)->next, n));
}
