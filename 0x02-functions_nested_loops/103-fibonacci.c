#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	long int sum = 0;
	long int first = 0, second = 1, even, i;

	for (i = 0; i < 15; i++)
	{
		sum = first + second;
		if (sum % 2 == 0)
		{
			even = even + sum;
		}
		first = second;
		second = sum;
	}
	printf("%li\n", even);
	return (0);
}
