#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 * @argc: Number of arguments
 * @argv: array of arguments
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int ce, c = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	ce = atoi(argv[1]);
	while (ce > 0)
	{
		c++;
		if ((ce - 25) >= 0)
		{
			ce -= 25;
			continue;
		}
		if ((ce - 10) >= 0)
		{
			ce -= 10;
			continue;
		}
		if ((ce - 5) >= 0)
		{
			c -= 5;
			continue;
		}
		if ((ce - 2) >= 0)
		{
			ce -= 2;
			continue;
		}
		if ((ce - 1) >= 0)
		{
			ce -= 1;
			continue;
		}
		ce--;
	}
	printf("%d\n", c);
	return (0);
}
