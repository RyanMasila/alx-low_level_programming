#include <stdio.h>
#include <stdlib.h>

char word_len(char *st);
int _wcount(char *sw);
char **strtow(char *str);
/**
 * word_len - finds word length
 * @st: string
 * Return: Pointer
 */
char word_len(char *st)
{
	int i = 0, l = 0;

	while (*(st + i) && *(st + i) != ' ')
	{
		l++;
		i++;
	}
	return (l);
}


/**
 * _wcount - counts words
 * @sw: string
 * Return: integer
 */
int _wcount(char *sw)
{
	int i = 0, wo = 0, len = 0;

	for (i = 0; *(sw + i); i++)
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if (*(sw + i) != ' ')
		{
			wo++;
			i += word_len(sw + i);
		}
	}
	return (wo);
}
/**
 * strtow - splits a string into words
 * @str: argument
 * Return: character
 */
char **strtow(char *str)
{
	char **s;
	int i = 0;
	int wo, w, le, l;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}
	wo = _wcount(str);
	if (wo == 0)
	{
		return (NULL);
	}
	s = malloc((wo + 1) * (sizeof(char *)));
	if (s == NULL)
	{
		return (NULL);
	}
	for (w = 0; w < wo; w++)
	{
		while (str[i] == ' ')
		{
			i++;
		}

		le = word_len(str + i);
		s[w] = malloc((le + 1) * (sizeof(char)));
		if (s[w] == NULL)
		{
			for (; w >= 0; w--)
			{
				free(s[w]);
			}
			free(s);
			return (NULL);
		}
		for (l = 0; l < le; l++)
		{
			s[w][l] = str[i++];
		}
		s[w][l] = '\0';
	}
	s[w] = NULL;
	return (s);
}
