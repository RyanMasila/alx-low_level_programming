#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - converts binart to unsigned int
 * @b: binary number
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	unsigned int i;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			dec = (dec << 1) | 1;
		else if (b[i] == '0')
			dec <<= 1;
		else if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	return (dec);
}
