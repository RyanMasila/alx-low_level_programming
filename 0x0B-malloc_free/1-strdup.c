#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memeory
 * @str: string
 * Return: character
 */
char *_strdup(char *str)
{
	char *ar;
	int index, len;

	if (str == NULL)
	{
		return (NULL);
	}

	for (index = 0; str[index]; index++)
	{
		len++;
	}
	ar = malloc(sizeof(char) * (len + 1));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (index = 0; str[index]; index++)
	{
		ar[index] = str[index];
	}
	ar[len] = '\0';
	return (ar);
}
