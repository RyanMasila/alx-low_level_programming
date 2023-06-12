#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of char
 * @size: size of the array
 * @c: character that initializes the array
 * Return: a character
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ar = malloc(sizeof(char) * size);
		if (ar == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < size; i++)
		{
			ar[i] = c;
		}
	}
	return (ar);
}
