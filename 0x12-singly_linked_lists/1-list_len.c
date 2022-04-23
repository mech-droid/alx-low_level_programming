#include "lists.h"
#include <stdio.h>
#include<stdlib.h>
/**
 * list_len - returns element in a list
 *@h: pointer to list_t
 *
 *Return: number of element
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	while(h)
	{
		count++;
		h = h->next;
		
	}
	return(count);
}
