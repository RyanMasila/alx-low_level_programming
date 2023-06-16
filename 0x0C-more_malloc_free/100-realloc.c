#include <stdio.h>
#include <stdlib.h>
/**
 * _memcpy - copy n bytes from memory area src to memory area dest
 * @dest: memory area to copy to
 * @src: memory area to copy from
 * @n: amount to copy from memory area
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
/**
 * _realloc - reallocates memory using malloc
 * @ptr: Old memory block
 * @old_size: size of old mem block
 * @new_size: size of new mem block
 * Return: Pointer to new mem space
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nptr;
	unsigned int min;

	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		return(nptr);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size < old_size)
		min = new_size;
	else
		min = old_size;
	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);
	nptr = _memcpy(nptr, ptr, min);
	free(ptr);
	return (nptr);
}
