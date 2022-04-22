#include "list.h"
#include <stdio.h>





size_t print_list(const list_t *h)
{
	while (h != NULL)
	{
		printf("(%s, %d)", h->str, h->len);
		h = h->next;
	}
}
