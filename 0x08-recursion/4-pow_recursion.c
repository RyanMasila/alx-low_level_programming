#include <stdio.h>
/**
 * _pow_recursion - returns x raised to y
 * @x: value to be raised to y
 * @y: power which x is raised to
 * Return: integer value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
