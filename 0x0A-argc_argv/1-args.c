#include <stdio.h>
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of strings
 * Return: 0
 */
int main(int argc, char __attribute__ ((unused))*argv[])
{
	int i, s = 0;

	if (argc == 1)
	{
		printf("%d\n", s);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			printf("%d\n", i);
		}
	}
	return (0);
}
