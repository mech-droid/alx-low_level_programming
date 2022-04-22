#include "lists.h"
#include <stdio.h>

/**
* print_list - prints all element
* @h: pointer to list_t
*
* Return the number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d],(%s)", 0, "nil");
		}
		printf("(%s, %d)", h->str, h->len);
		h = h->next;
	}
	count++;
	return(count);
}
