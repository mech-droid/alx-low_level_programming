#include "lists.h"
#include <stdio.h>

size_t list_len(const list_t *h)
{
	int count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	printf("%d", count);
	return(count);
}
