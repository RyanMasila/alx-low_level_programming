#include <stdio.h>
#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number
 * @index: index
 * Return: integer
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1ul << index) & *n);
	return (1);
}
