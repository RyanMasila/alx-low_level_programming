#include <stdio.h>
#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index
 * Return: binary value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int binary;
	signed long int size;

	size = sizeof(n) * 8 - 1;
	if (index > size)
		return (-1);
	binary = (n >> index) & 1;
	return (binary);
}
