#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: The number
 * Return: 0 on success
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
		return (n);
}
