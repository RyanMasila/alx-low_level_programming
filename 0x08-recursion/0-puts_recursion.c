#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: character of a string
 * Return: empty
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
