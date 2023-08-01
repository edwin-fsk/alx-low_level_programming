#include "lists.h"
/**
 * print_listint - prints all the elements of a linked list
 * @a: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *a)
{
const listint_t *temp = a;
size_t numOfnodes;

for (numOfnodes = 0; temp != NULL; numOfnodes++)
{
	printf("%d\n", temp->n);
	temp = temp->next; /*point to the next node*/
}
return (numOfnodes);
}
