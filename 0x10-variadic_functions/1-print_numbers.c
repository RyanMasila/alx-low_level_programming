#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - prints numbers
 * @separator: string
 * @n: number of integers passed to function
 * @...: variables
 * Return: empty
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p, int));
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(p);
}
