#include "lists.h"
/**
 * print_listint - prints all the elements of a linked list
 * @a: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *a)
{
 size_t nOn = 0;

 while (a)
 {
 printf("%d\n", a->n);
 nOn++;
 a = a->next;
 }

 return (nOn);
}
