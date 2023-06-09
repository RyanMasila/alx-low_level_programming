#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 1, ex = 0;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		ex = 1;
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			sum *= atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (ex);
}
