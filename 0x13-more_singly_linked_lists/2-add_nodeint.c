#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - adds node at the beggining of a list
 * @head: pointer
 * @n: data(int)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *h = NULL;

	h = malloc(sizeof(listint_t));
	if (h == NULL)
	{
		return (NULL);
	}
		h->n = n;
		h->next = *head;
		*head = h;
	return (h);
}
