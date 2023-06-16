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
	char *ptr;
	int i = 0, l = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	l = nmemb * size;
	ptr = malloc(l);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < l)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
