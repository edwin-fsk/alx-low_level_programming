#include "lists.h"
/**
 * delete_nodeint_at_index - delete node
 * Description: Function that deletes the node at index index of a listint_t.
 * @head: pointer to a pointer of type listint_t
 * @index: the index of the node that should be deleted, index starts at 0
 * Return: 1 if succeed and -1 if it failed.
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *copy;
	unsigned int i;
while (*head == NULL)
{
return (-1);
}

temp = *head;

if (index == 0)
{
	temp = temp->next;
	free(*head);
	*head = temp;
}
else
{
for (i = 1; i < index; i++)
{

if (temp->next == NULL)
return (-1);

temp = temp->next;
}
copy = temp;
copy = copy->next->next;

free(temp->next);
temp->next = copy;
}
return (1);
}
