#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - prints characters
 * @arg: list of arguments
 */
void print_char(va_list arg)
{
	char l;

	l = va_arg(arg, int);
	printf("%c", l);
}
/**
 * print_int - prints integers
 * @arg: list of arguments
 */
void print_int(va_list arg)
{
	int n;

	n = va_arg(arg, int);
	printf("%d", n);
}
/**
 * print_float - prints float
 * @arg: list of arguments
 */
void print_float(va_list arg)
{
	float n;

	n = va_arg(arg, double);
	printf("%f", n);
}
/**
 * print_string - prints a string
 * @arg: list of arguments
 */
void print_string(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	else
	{
		printf("%s", s);
	}
}

/**
 * print_all - prints anything
 * @format: string
 * @...: arguments
 * Return: empty
 */
void print_all(const char * const format, ...)
{
	va_list a;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(a, format);

	while (format && (*(format + 1)))
	{
		j = 0;

		while (j < 4 && (*(format + 1) != *(funcs[j].symbol)))
		{
			j++;
		}
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(a);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(a);
}
