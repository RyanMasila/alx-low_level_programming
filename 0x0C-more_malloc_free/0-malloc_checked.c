#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory being allocated
 * Return: empty
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = (unsigned int *)malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
