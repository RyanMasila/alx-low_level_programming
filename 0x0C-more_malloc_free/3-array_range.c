#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: beginning of range
 * @max: end of range
 * Return: integer
 */

int *array_range(int min, int max)
{
	int *ptr, i = 0;

	if (min > max)
		return (NULL);

	ptr = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (ptr == NULL)
		return (NULL);

	while (min <= max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
