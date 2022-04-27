#include "lists.h"

/**
 * *add_nodeint_end - add an element at the end of the list
 * @head: pointer to first element
 * @n: data of node
 *
 * Return: the new element or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = NULL;
	listint_t *point = *head;


	temp = malloc(sizeof(listint_t));
	
	if (!temp)
		return (NULL);

	temp->n = n;
	temp->next = NULL;


	while (point != NULL)
	{
		point = point->next;
	}
	point->next = temp;

	return (temp);
}
