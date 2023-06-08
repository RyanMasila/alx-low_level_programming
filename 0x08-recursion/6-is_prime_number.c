#include <stdio.h>
/**
 * prime2 - enables evaluation from 1 to n
 * @a: same as n
 * @b: value
 * Return: integer
 */
int prime2(int a, int b)
{
	if (a == b)
	{
		return (1);
	}
	else if (a % b == 0)
	{
		return (0);
	}
	return (prime2(a, b + 1));
}
/**
 * is_prime_number - checks if No. is prime
 * @n: integer
 * Return: integer
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime2(n, 2));
}
