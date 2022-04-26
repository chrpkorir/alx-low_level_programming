#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - prints all elements of listint_t list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	while (h != NULL)
	{
		printf("%d\n",h->n);
		h = h->next;
	}
}
