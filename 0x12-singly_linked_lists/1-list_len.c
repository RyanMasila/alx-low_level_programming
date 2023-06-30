#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - prints number of elements in a singly linked list
 * @h: pointer to head of singly linked list
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
	unsigned int size = 0;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}
