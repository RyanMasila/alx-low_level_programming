#include <stdio.h>
/**
 * _sqrt_recursion - enables evaluation from 1 to n
 * @n: square value
 * Return: integer value
 */
int sqrt2(int a, int b)
{
	if(b * b == a)
	{
		return (b);
	}
	else if(b * b > a)
	{
		return (-1);
	}
	return (sqrt2(a, b + 1));
}
/**
 * _sqrt_recursion - returns natural sqrt of n
 * @n: number
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
