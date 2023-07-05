#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - prints a singly linked list
 * @h: pointer to head of singly linked list
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int size = 0;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}

