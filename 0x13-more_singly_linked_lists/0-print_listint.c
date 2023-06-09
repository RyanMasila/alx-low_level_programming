#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - prints a singly linked list
 * @h: pointer to head of singly linked list
 * Return: number of elements in list
 */
size_t print_listint(const listint_t *h)
{
	unsigned int size = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}
