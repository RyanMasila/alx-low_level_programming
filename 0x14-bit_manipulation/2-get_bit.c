#include <stdio.h>
#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size;

	size = sizeof(n) * 8 - 1;
	if (index > size)
		return (-1);
	return ((n >> index) & 1);
}
