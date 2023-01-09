#include "main.h"

/**
 * prime_number_checker - checks recursively
 * @n: number
 * @c: denominator
 * Return: 0 or 1
 */

int prime_number_checker(int n, int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	else
		return (prime_number_checker(n, c + 1));
}

/**
 * is_prime_number - checks if a number is a prime number
 * @n: number
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 0 || n == 1)
	{
		return (0);
	}
	else
	{
		return (prime_number_checker(n, 2));
	}
}
