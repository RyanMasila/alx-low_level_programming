#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - counts no. of elements in lnkd list
 * @h: head of list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nds = 0;

	while (h)
	{
		nds++;
		h = h->next;
	}

	return (nds);
}
