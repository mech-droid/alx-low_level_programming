#include "lists.h"

/**
 * listint_len - returns number of nodes
 * @h: pointer to lstint_t
 *
 * return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	const listint_t *ptr = NULL;
	ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}

