#include <stdio.h>
#include <stdlib.h>
/**
 * calloc - allocates memory
 * @nmemb: number of elements in an array
 * @size: size of each element
 * Return: empty
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;
	unsigned int i;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		i++;
	}
	ptr = malloc(i * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		return (ptr);
	}
}
