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

	const listint_t *ptr;

	ptr = h;

	while (ptr != NULL)
	{
		printf("%d", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
