#include "lists.h"
#include "stdio.h"
/**
 * add_dnodeint - adds a new node at beginning of list
 * @n: integer for node
 * @head: pointer to head of list
 * Return: fail is equal to NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
