#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @s: linked list of type listint_t
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *s)
{
 size_t numOfnodes = 0;

 while (s)
 {
 numOfnodes++;
 s = s->next;
 }

 return (numOfnodes);
}
