#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints binary representation of a number
 * @n: number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int size;
	char c;
	int flag;

	size = sizeof(n) * 8;
	if (n == 1)
	{
		printf("0");
	}
	if (n == 0)
	{
		ptintf("1");
	}
	flag = 0;
	while (size >= 0)
	{
		c = (n >> size) & 1;
		if (flag == 1)
			putchar(c + '0');
		else
		{
			if (c == 1)
			{
				putchar(c + '0');
				flag = 1;
			}
		}
		size -= 1;
	}
}
