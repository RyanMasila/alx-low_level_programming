#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * _isnumber - checks if string is a number
 * @s: string
 * Return: 1
 */
int _isnumber(char *s)
{
	int x, c, d;

	x = 0, d = 0, c = 1;
	if (*s == '-')
	{
		x++;
	}
	for (; *(s + 1) != 0; x++)
	{
		d = isdigit(*(s + 1));
		if (d == 0)
		{
			c = 0;
			break;
		}
	}
	return (c);
}
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, n = 0, ex = 0;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			if (_isnumber(argv[1]))
			{
				n += atoi(argv[i]);
			}
			else
			{
				ex = 1;
			}
		}
	}
	if (ex == 0)
	{
		printf("%i\n", n);
	}
	else
	{
		printf("%s\n", "Error");
	}
	return (ex);
}
