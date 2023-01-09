#include "main.h"
/**
 * sqrt_recurs - recursively finds the square root
 * @n: the number
 * @c: anothe num
 * Return: ans
 */

int sqrt_recurs(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);

	}
	return (sqrt_recurs(n, c + 1));
}
/**
 * _sqrt_recursion - returns natural square root of a num
 * @n: num
 * Return: the ans.
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	return (sqrt_recurs(n, 2));
}
