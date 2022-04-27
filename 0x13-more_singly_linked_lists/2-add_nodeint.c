#include "lists.h"

/**
 * *add_nodeint - adds a new node at beginning of list
 * @head: pointer to the first node in an element
 * @n: node data
 *
 * Return: pointer to new nod or null
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *fav  = malloc(sizeof(listint_t));
	if (!fav)
		printf("NULL");
	
	fav->n = n;
	fav->next = *head;
	*head = fav;
	return (fav);
}
