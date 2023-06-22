#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: constant unsigned int
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int i, s = 0;

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		s = s + va_arg(p, int);
	}
	va_end(p);
	return (s);
}
