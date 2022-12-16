#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	long int divisor = 2;
	long int num = 612852475143;
	long int quotient = num;

	while (quotient != divisor)
	{
		if (quotient % divisor == 0)
		{
			quotient = quotient / divisor;
		}
		else
			divisor++;
	}
	printf("%li\n", quotient);
	return (0);
}
