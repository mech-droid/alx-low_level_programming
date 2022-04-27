#include "lists.h"

/**
 * print_listint - print element in the list
 * @h: pointer to listint_t
 *
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
