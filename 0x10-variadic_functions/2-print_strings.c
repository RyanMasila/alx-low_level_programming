#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - prints numbers
 * @separator: string
 * @n: number of integers passed to function
 * @...: variables
 * Return: empty
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	char *s;
	unsigned int i;

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(p, char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(p);
}
