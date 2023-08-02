#include "lists.h"
/**
 * insert_nodeint_at_index -add node to list.
 * Description: Function that adds a new node in an index position of list
 * @head: pointer to a pointer
 * @idx: int that represents the index, where the node is going to be inserted
 * @n: integer value of the structure
 * Return: the address of the new element or NULL if fail (the new node)
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *myNode;
	listint_t *temp = *head;

	myNode = malloc(sizeof(listint_t));

if (myNode == NULL)
{
	free(myNode);
	return (NULL);
}
	myNode->n = n;

if (idx == 0)
{
	myNode->next = *head;
	*head = myNode;
return (myNode);
}
while ((idx - 1) > 0)
{
if (temp == NULL)
{
	free(myNode);
	return (NULL);
}
		temp = temp->next;
		idx--;
}
myNode->next = temp->next;
temp->next = myNode;

return (myNode);
}
